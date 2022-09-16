/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcremers <hcremers@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 13:48:57 by hcremers          #+#    #+#             */
/*   Updated: 2022/09/16 12:23:16 by hcremers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	_name = "Default";
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
	std::cout << "Some ClapTrap's nature has changed, they are now a FragTrap" << std::endl;

	return;
}

FragTrap::FragTrap(std::string name)
{
	_name = name;
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
	std::cout << "ClapTrap " << _name << "'s nature has changed, they are now a FragTrap" << std::endl;

	return;
}

FragTrap::FragTrap(const FragTrap &src)
{
	*this = src;

	return;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << _name << " stopped being a FragTrap and is now a ClapTrap again" << std::endl;

	return;
}

FragTrap	&FragTrap::operator=(const FragTrap &rhs)
{
	_name = rhs._name;
	_hitPoints = rhs._hitPoints;
	_energyPoints = rhs._energyPoints;
	_attackDamage = rhs._attackDamage;

	return (*this);
}

void		FragTrap::highFivesGuys() const
{
	std::cout << "FragTrap " << _name << " says: \"Good job, guys! High fives all around!\"" << std::endl;

	return;
}

void		FragTrap::attack(const std::string &target)
{
	if (_energyPoints > 0)
	{
		if (_hitPoints > 0)
		{
			_energyPoints--;
			std::cout << "FragTrap " << _name << " attacks " << target << ", causing them " << _attackDamage << " hit points" << std::endl;
		}
		else
			std::cout << "FragTrap " << _name << " is too dead to attack" << std::endl;
	}
	else 
		std::cout << "FragTrap " << _name << " is too tired to attack" << std::endl;

	return;
}