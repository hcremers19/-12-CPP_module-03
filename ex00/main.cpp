/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcremers <hcremers@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 14:37:27 by hcremers          #+#    #+#             */
/*   Updated: 2022/09/16 12:16:55 by hcremers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main()
{
// Instantiate characters
	ClapTrap	bob("Bob");
	ClapTrap	jeb("Jeb");

// Display attributes for both of them
	std::cout << std::endl;
	bob.displayHitPoints();
	bob.displayEnergyPoints();
	bob.displayAttackDamage();

	jeb.displayHitPoints();
	jeb.displayEnergyPoints();
	jeb.displayAttackDamage();

// Change their attack damage from 0 to 1
	bob.setAttackDamage(1);
	jeb.setAttackDamage(1);

// Let Bob attack Jeb 10 times, display its attributes each time
	for (size_t i = 0; i < 11; i++)
	{
		std::cout << std::endl;
		bob.attack("Jeb");
		jeb.takeDamage(bob.getAttackDamage());

		std::cout << std::endl;
		bob.displayHitPoints();
		bob.displayEnergyPoints();
		// bob.displayAttackDamage();
	}

// Display Jeb's attributes after having been attacked 10 times
	std::cout << std::endl;
	jeb.displayHitPoints();
	jeb.displayEnergyPoints();
	jeb.displayAttackDamage();

// Try to repair both characters, unsuccessfully
	std::cout << std::endl;
	bob.beRepaired(10);
	jeb.beRepaired(10);

// Give Jeb 1 hit point for him to then successfully repair itself
	std::cout << std::endl;
	jeb.setHitPoints(1);
	std::cout << "ClapTrap Jeb miraculously resurrected!" << std::endl;

	jeb.beRepaired(10);

	std::cout << std::endl;

	return (0);
}
