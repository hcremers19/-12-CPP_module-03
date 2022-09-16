/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcremers <hcremers@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 12:27:56 by hcremers          #+#    #+#             */
/*   Updated: 2022/09/16 13:31:54 by hcremers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
	public:
		DiamondTrap();
		DiamondTrap(std::string name);
		DiamondTrap(const DiamondTrap &src);
		~DiamondTrap();

		DiamondTrap	&operator=(const DiamondTrap &rhs);

		void		whoAmI() const;

		using		FragTrap::_hitPoints;
		using		ScavTrap::_energyPoints;
		using		FragTrap::_attackDamage;
		using		ScavTrap::attack;

	private:
		std::string	_name;
};

#endif