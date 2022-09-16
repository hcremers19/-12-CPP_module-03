/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcremers <hcremers@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 14:37:27 by hcremers          #+#    #+#             */
/*   Updated: 2022/09/16 17:08:52 by hcremers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int	main(void)
{
	DiamondTrap	gen("Gene");

	// std::cout << std::endl;
	// gen.displayHitPoints();
	// gen.displayEnergyPoints();
	// gen.displayAttackDamage();

	std::cout << std::endl;
	gen.whoAmI();

	std::cout << std::endl;

	return (0);
}
