/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcremers <hcremers@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 13:26:29 by hcremers          #+#    #+#             */
/*   Updated: 2022/09/20 17:40:11 by hcremers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : _name("Default")
{
	ClapTrap::_name = ClapTrap::_name + "_clap_name";

	std::cout << "A ScavTrap and a FragTrap have merged into a DiamondTrap" << std::endl;

	return;
}

DiamondTrap::DiamondTrap(std::string name) : _name(name)
{
	ClapTrap::_name = ClapTrap::_name + "_clap_name";

	std::cout << "DiamondTrap " << _name << " is born from the merge of a ScavTrap and a FragTrap" << std::endl;

	return;
}

DiamondTrap::DiamondTrap(const DiamondTrap &src)
{
	*this = src;

	return;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap " << _name << " divided into a ScavTrap and a FragTrap" << std::endl;

	return;
}

DiamondTrap	&DiamondTrap::operator=(const DiamondTrap &rhs)
{
	_name = rhs._name;
	_hitPoints = rhs._hitPoints;
	_energyPoints = rhs._energyPoints;
	_attackDamage = rhs._attackDamage;

	return (*this);
}

void		DiamondTrap::whoAmI() const
{
	std::cout << "I am " << _name << ", born from the ClapTrap " << ClapTrap::_name << std::endl;

	return;
}
