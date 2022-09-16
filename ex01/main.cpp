/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcremers <hcremers@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 14:37:27 by hcremers          #+#    #+#             */
/*   Updated: 2022/09/16 17:08:34 by hcremers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main(void)
{
	ScavTrap	bil("Bill");

	// std::cout << std::endl;
	// bil.displayHitPoints();
	// bil.displayEnergyPoints();
	// bil.displayAttackDamage();

	std::cout << std::endl;
	bil.guardGate();

	std::cout << std::endl;
	return (0);
}
