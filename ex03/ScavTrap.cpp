/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcremers <hcremers@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 13:48:57 by hcremers          #+#    #+#             */
/*   Updated: 2022/09/16 13:44:11 by hcremers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	_name = "Default";
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	std::cout << "A ClapTrap has evolved into a ScavTrap" << std::endl;

	return;
}
ScavTrap::ScavTrap(std::string name)
{
	_name = name;
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	std::cout << "ClapTrap " << _name << " has evolved into a ScavTrap" << std::endl;

	return;
}
ScavTrap::ScavTrap(const ScavTrap &src)
{
	*this = src;

	return;
}
ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << _name << " turned back into a ClapTrap" << std::endl;

	return;
}

ScavTrap	&ScavTrap::operator=(const ScavTrap &rhs)
{
	_name = rhs._name;
	_hitPoints = rhs._hitPoints;
	_energyPoints = rhs._energyPoints;
	_attackDamage = rhs._attackDamage;

	return (*this);
}

void		ScavTrap::guardGate() const
{
	std::cout << "ScavTrap " << _name << " has entered gate keeper mode" << std::endl;
	return;
}

void		ScavTrap::attack(const std::string &target)
{
	if (_energyPoints > 0)
	{
		if (_hitPoints > 0)
		{
			_energyPoints--;
			std::cout << "ScavTrap " << _name << " attacks " << target << ", causing them " << _attackDamage << " hit points" << std::endl;
		}
		else
			std::cout << "ScavTrap " << _name << " is too dead to attack" << std::endl;
	}
	else
		std::cout << "ScavTrap " << _name << " is too tired to attack" << std::endl;

	return;
}