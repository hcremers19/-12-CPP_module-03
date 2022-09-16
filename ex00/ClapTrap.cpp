/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcremers <hcremers@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 10:26:52 by hcremers          #+#    #+#             */
/*   Updated: 2022/09/16 13:45:22 by hcremers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("Default"), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "A ClapTrap spawned out of nowhere" << std::endl;

	return;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "ClapTrap " << _name << " spawned out of nowhere" << std::endl;

	return;
}

ClapTrap::ClapTrap(const ClapTrap &src)
{
	*this = src;

	return;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << _name << " vanished into the unknown" << std::endl;

	return;
}

ClapTrap	&ClapTrap::operator=(const ClapTrap &rhs)
{
	_name = rhs._name;
	_hitPoints = rhs._hitPoints;
	_energyPoints = rhs._energyPoints;
	_attackDamage = rhs._attackDamage;

	return (*this);
}

void 		ClapTrap::attack(const std::string &target)
{
	if (_energyPoints > 0)
	{
		if (_hitPoints > 0)
		{
			_energyPoints--;
			std::cout << "ClapTrap " << _name << " attacks ClapTrap " << target << ", causing them " << _attackDamage << " hit points" << std::endl;
		}
		else
			std::cout << "ClapTrap " << _name << " is too dead to attack" << std::endl;
	}
	else
		std::cout << "ClapTrap " << _name << " is too tired to attack" << std::endl;

	return;
}

void 		ClapTrap::takeDamage(unsigned int amount)
{
	if (amount < 0)
		std::cout << "Error, ClapTrap " << _name << " can't take negative damage" << std::endl;
	else if (_hitPoints > 0)
	{
		_hitPoints -= amount;
		std::cout << "ClapTrap " << _name << " took a hit and lost " << amount << " hit points" << std::endl;
	}
	else
		std::cout << "ClapTrap " << _name << " is already dead and can't take any more hits" << std::endl;

	if (_hitPoints < 0)
		_hitPoints = 0;

	return;
}

void 		ClapTrap::beRepaired(unsigned int amount)
{
	if (amount < 0)
		std::cout << "Error, ClapTrap " << _name << " can't restore negative points" << std::endl;
	else if (_energyPoints > 0)
	{
		if (_hitPoints > 0)
		{
			_energyPoints--;
			_hitPoints += amount;
			std::cout << "ClapTrap " << _name << " restored " << amount << " hit points" << std::endl;
		}
		else
			std::cout << "ClapTrap " << _name << " is too dead to repair themself" << std::endl;
	}
	else
		std::cout << "ClapTrap " << _name << " is too tired to repair themself" << std::endl;

	return;
}

void		ClapTrap::displayHitPoints() const
{
	std::cout << "ClapTrap " << _name << "'s amount of hit points is " << getHitPoints() << std::endl;

	return;
}

void		ClapTrap::displayEnergyPoints() const
{
	std::cout << "ClapTrap " << _name << "'s amount of energy points is " << getEnergyPoints() << std::endl;

	return;
}

void		ClapTrap::displayAttackDamage() const
{
	std::cout << "ClapTrap " << _name << "'s amount of attack damage is " << getAttackDamage() << std::endl;

	return;
}

int			ClapTrap::getHitPoints() const			{return (_hitPoints);}
int			ClapTrap::getEnergyPoints() const		{return (_energyPoints);}
int			ClapTrap::getAttackDamage() const		{return (_attackDamage);}

void		ClapTrap::setHitPoints(int amount)		{if (amount >= 0) _hitPoints = amount;}
void		ClapTrap::setEnergyPoints(int amount)	{if (amount >= 0) _energyPoints = amount;}
void		ClapTrap::setAttackDamage(int amount)	{if (amount >= 0) _attackDamage = amount;}
