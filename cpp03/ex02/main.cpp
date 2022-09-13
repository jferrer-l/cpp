/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jferrer- <jferrer-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 17:33:46 by jferrer-          #+#    #+#             */
/*   Updated: 2022/09/13 19:49:08 by jferrer-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main( void )
{
	{
		ScavTrap sc4vtp("Juan");

		sc4vtp.attack("Pepe");
		sc4vtp.takeDamage(6);
		sc4vtp.beRepaired(4);
		sc4vtp.takeDamage(3);
		sc4vtp.guardGate();
		sc4vtp.beRepaired(8);
		sc4vtp.takeDamage(17);
	}
	std::cout << std::endl;
	{
		FragTrap frag("Juan");

		frag.attack("Pepe");
		frag.takeDamage(6);
		frag.beRepaired(4);
		frag.takeDamage(3);
		frag.highFivesGuys();
		frag.beRepaired(8);
		frag.takeDamage(17);
	}
	std::cout << std::endl;
	{
		ClapTrap cl4ptp("Paco");

		cl4ptp.attack("Manolo");
		cl4ptp.takeDamage(6);
		cl4ptp.beRepaired(4);
		cl4ptp.takeDamage(3);
		cl4ptp.beRepaired(8);
		cl4ptp.takeDamage(17);
	}
	std::cout << std::endl;
}
