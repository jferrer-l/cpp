/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jferrer- <jferrer-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 19:49:22 by jferrer-          #+#    #+#             */
/*   Updated: 2022/09/13 22:26:51 by jferrer-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor called" << std::endl;
}

ScavTrap::ScavTrap()
{
	std::cout << "ScavTrap default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name)
{
	std::cout << "ScavTrap default constructor called" << std::endl;
	this->name = name;
	this->hitppoints = 100;
	this->energypoints = 50;
	this->attackdamage = 20;
}

ScavTrap::ScavTrap(const ScavTrap& copy)
{
	std::cout << "ScavTrap copy constructor called" << std::endl;
	this->name = copy.getName();
	this->hitppoints = copy.getHitpoints();
	this->energypoints = copy.getEnergypoints();
	this->attackdamage = copy.getAttackdamage();
}

ScavTrap& ScavTrap::operator=(const ScavTrap& clapclap)
{
	std::cout << "ScavTrap copy assignment operator called" << std::endl;
	this->name = clapclap.getName();
	this->hitppoints = clapclap.getHitpoints();
	this->energypoints = clapclap.getEnergypoints();
	this->attackdamage = clapclap.getAttackdamage();
	return *this;
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << this->name << " is now in Gate keeper mode\n";
}

void ScavTrap::attack(const std::string& target)
{
	if (hitppoints > 0 && energypoints > 0)
	{
		std::cout << "ScavTrap " << this->name << " attacks " << target << ", causing " << this->attackdamage << " points of damage! xd\n";
		energypoints--;
	}
	else if (hitppoints <= 0)
		std::cout << "ScavTrap " << this->name << " can't attack because it doesn't have any hitpoints\n";
	else
		std::cout << "ScavTrap " << this->name << " can't attack because it doesn't have any energypoints\n";
}
