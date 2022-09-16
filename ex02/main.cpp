/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcremers <hcremers@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 14:37:27 by hcremers          #+#    #+#             */
/*   Updated: 2022/09/16 17:08:13 by hcremers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int	main(void)
{
	FragTrap	val("Valentina");

	// std::cout << std::endl;
	// val.displayHitPoints();
	// val.displayEnergyPoints();
	// val.displayAttackDamage();

	std::cout << std::endl;
	val.highFivesGuys();

	std::cout << std::endl;

	return (0);
}
