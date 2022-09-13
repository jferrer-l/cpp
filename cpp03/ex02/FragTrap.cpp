/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jferrer- <jferrer-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 19:16:54 by jferrer-          #+#    #+#             */
/*   Updated: 2022/09/13 19:45:53 by jferrer-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor called" << std::endl;
}

FragTrap::FragTrap(std::string name)
{
	std::cout << "FragTrap default constructor called" << std::endl;
	this->name = name;
	this->hitppoints = 100;
	this->energypoints = 100;
	this->attackdamage = 30;
}

FragTrap::FragTrap(const FragTrap& copy)
{
	std::cout << "FragTrap copy constructor called" << std::endl;
	this->name = copy.getName();
	this->hitppoints = copy.getHitpoints();
	this->energypoints = copy.getEnergypoints();
	this->attackdamage = copy.getAttackdamage();
}

FragTrap& FragTrap::operator=(const FragTrap& clapclap)
{
	std::cout << "FragTrap copy assignment operator called" << std::endl;
	this->name = clapclap.getName();
	this->hitppoints = clapclap.getHitpoints();
	this->energypoints = clapclap.getEnergypoints();
	this->attackdamage = clapclap.getAttackdamage();
	return *this;
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << this->name << " displayed a positive high fives request\n";
}

void	FragTrap::attack(const std::string& target)
{
	if (hitppoints > 0 && energypoints > 0)
	{
		std::cout << "FragTrap " << this->name << " attacks " << target << ", causing " << this->attackdamage << " points of damage! xd\n";
		energypoints--;
	}
	else if (hitppoints <= 0)
		std::cout << "FragTrap " << this->name << " can't attack because it doesn't have any hitpoints\n";
	else
		std::cout << "FragTrap " << this->name << " can't attack because it doesn't have any energypoints\n";
}
