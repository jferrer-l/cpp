/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jferrer- <jferrer-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 02:51:56 by jferrer-          #+#    #+#             */
/*   Updated: 2022/08/17 03:36:43 by jferrer-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(){}

Weapon::Weapon(std::string weapon)
{
	this->type = weapon;
}

Weapon::~Weapon(){}

std::string	&Weapon::getType()
{
	std::string &ref = type;
	return ref;
}

void		Weapon::setType(std::string newtype)
{
	this->type = newtype;
}
