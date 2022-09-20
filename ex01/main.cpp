/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcremers <hcremers@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 14:37:27 by hcremers          #+#    #+#             */
/*   Updated: 2022/09/20 17:02:53 by hcremers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main(void)
{
	ScavTrap	bil("Bill");

	std::cout << std::endl;
	bil.guardGate();

	std::cout << std::endl;
	bil.attack("another ScavTrap");

	std::cout << std::endl;
	bil.takeDamage(5);

	std::cout << std::endl;
	bil.displayHitPoints();
	bil.displayEnergyPoints();
	bil.displayAttackDamage();

	std::cout << std::endl;
	return (0);
}
