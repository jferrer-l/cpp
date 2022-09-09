/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jferrer- <jferrer-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 02:51:33 by jferrer-          #+#    #+#             */
/*   Updated: 2022/08/17 20:16:42 by jferrer-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "iostream"

//HumanA::HumanA(){}
HumanA::~HumanA(){}

HumanA::HumanA(std::string name, Weapon &weapon): name(name), weapon(weapon)
{
}

void HumanA::attack()
{
	std::cout << name << " attacks with their " << weapon.getType() << std::endl;
}
