/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jferrer- <jferrer-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 17:33:44 by jferrer-          #+#    #+#             */
/*   Updated: 2022/09/13 22:48:29 by jferrer-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap destructor called" << std::endl;
}

ClapTrap::ClapTrap(): name(), hitppoints(0), energypoints(0), attackdamage(0)
{
	std::cout << "ClapTrap default protected constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name, int hitpoints, int energypoints, int attackdamage): name(name), hitppoints(hitpoints), energypoints(energypoints), attackdamage(attackdamage)
{}

ClapTrap::ClapTrap(std::string name): name(name), hitppoints(10), energypoints(10), attackdamage(0)
{
	std::cout << "ClapTrap default public constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& copy): name(copy.getName()), hitppoints(copy.getHitpoints()), energypoints(copy.getEnergypoints()), attackdamage(copy.getAttackdamage())
{
	std::cout << "ClapTrap copy constructor called" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& clapclap)
{
	std::cout << "ClapTrap copy assignment operator called" << std::endl;
	this->name = clapclap.getName();
	this->hitppoints = clapclap.getHitpoints();
	this->energypoints = clapclap.getEnergypoints();
	this->attackdamage = clapclap.getAttackdamage();

	return (*this);
}

std::string	ClapTrap::getName() const
{
	return this->name;
}

int	ClapTrap::getHitpoints() const
{
	return this->hitppoints;
}

int	ClapTrap::getEnergypoints() const
{
	return this->energypoints;
}

int	ClapTrap::getAttackdamage() const
{
	return this->attackdamage;
}

void ClapTrap::attack(const std::string& target)
{
	if (hitppoints > 0 && energypoints > 0)
	{
		std::cout << "ClapTrap " << this->name << " attacks " << target << ", causing " << this->attackdamage << " points of damage!\n";
		energypoints--;
	}
	else if (hitppoints <= 0)
		std::cout << "ClapTrap " << this->name << " can't attack because it doesn't have any hitpoints\n";
	else
		std::cout << "ClapTrap " << this->name << " can't attack because it doesn't have any energypoints\n";
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (hitppoints > 0)
	{
		std::cout << "ClapTrap " << this->name << " takes " << amount << " hitpoints!\n";
		this->hitppoints -= amount;
	}
	else
		std::cout << "ClapTrap " << this->name << " can't take damage because it doesn't have any hitpoints\n";
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (hitppoints > 0 && energypoints > 0)
	{
		std::cout << "ClapTrap " << this->name << " repairs itself restoring  " << amount << " hitpoints!\n";
		energypoints--;
		hitppoints += amount;
	}
	else if (hitppoints <= 0)
		std::cout << "ClapTrap " << this->name << " can't repair itself because it doesn't have any hitpoints\n";
	else
		std::cout << "ClapTrap " << this->name << " can't repair itself because it doesn't have any energypoints\n";
}
