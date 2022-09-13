/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jferrer- <jferrer-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 17:33:46 by jferrer-          #+#    #+#             */
/*   Updated: 2022/09/12 19:47:37 by jferrer-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	ClapTrap first("Paco");
	ClapTrap second("Juan");
	ClapTrap third("Alba");

	first.attack("Juan");
	second.takeDamage(first.getAttackdamage());
	std::cout << "Paco has " << first.getEnergypoints() << " energypoints and Juan has " << second.getHitpoints() << " hitpoints.\n";
	second = third;

	third.beRepaired(5);
	return (0);
}
