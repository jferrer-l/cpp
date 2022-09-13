/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jferrer- <jferrer-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 19:51:13 by jferrer-          #+#    #+#             */
/*   Updated: 2022/09/13 22:58:19 by jferrer-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"


DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap destructor called" << std::endl;
}

DiamondTrap::DiamondTrap()
{
	ClapTrap();
	FragTrap();
	ScavTrap();
	std::cout << "DiamondTrap default constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name)
{
	ClapTrap(name, 100, 50, 30);
	FragTrap();
	ScavTrap();
	std::cout << "DiamondTrap constructor called" << std::endl;

}

DiamondTrap::DiamondTrap(const DiamondTrap& copy)
{
	ClapTrap();
	(void)copy;
	std::cout << "DiamondTrap copy constructor called" << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& clapclap)
{
	std::cout << "DiamondTrap copy assignment operator called" << std::endl;
	if (this == &clapclap)
        return (*this);
    DiamondTrap::operator=(clapclap);
    return (*this);
}

void	DiamondTrap::whoAmI()
{
	std::cout << "I'm DiamondTrap and I'm ClapTrap" << std::endl;
}
