/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jferrer- <jferrer-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 02:51:41 by jferrer-          #+#    #+#             */
/*   Updated: 2022/08/17 03:33:16 by jferrer-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include "iostream"

HumanB::HumanB(){}
HumanB::~HumanB(){}

HumanB::HumanB(std::string name)
{
	this->name = name;
}

void HumanB::setWeapon(Weapon weapon)
{
	this->weapon = weapon;
}

void HumanB::attack()
{
	std::cout << name << " attacks with their " << weapon.getType() << std::endl;
}
