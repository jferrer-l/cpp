/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jferrer- <jferrer-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 19:51:16 by jferrer-          #+#    #+#             */
/*   Updated: 2022/09/13 22:50:44 by jferrer-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include <iostream>
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap: public FragTrap, public ScavTrap
{
private:
std::string name;

public:
	virtual ~DiamondTrap();
	DiamondTrap();
	DiamondTrap(std::string name);
	DiamondTrap(const DiamondTrap& copy);
	DiamondTrap& operator=(const DiamondTrap& clapclap);

	void	whoAmI();
};

#endif
