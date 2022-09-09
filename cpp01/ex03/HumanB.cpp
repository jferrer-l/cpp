/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jferrer- <jferrer-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 02:51:41 by jferrer-          #+#    #+#             */
/*   Updated: 2022/08/17 21:07:21 by jferrer-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include "iostream"

HumanB::HumanB(){}
HumanB::~HumanB(){}

HumanB::HumanB(std::string name): name(name)
{
}

void HumanB::setWeapon(Weapon &newweapon)
{
	this->weapon = &newweapon;
}

void HumanB::attack()
{
	std::cout << name << " attacks with their " << weapon->getType() << std::endl;
}
