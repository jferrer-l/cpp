/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jferrer- <jferrer-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 02:51:56 by jferrer-          #+#    #+#             */
/*   Updated: 2022/08/17 21:07:57 by jferrer-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include <iostream>

Weapon::Weapon(){}

Weapon::Weapon(std::string weapon_name)
{
	this->type = weapon_name;
}

Weapon::~Weapon(){}

std::string	&Weapon::getType()
{
	return type;
}

void		Weapon::setType(std::string newtype)
{
	type = newtype;
}
