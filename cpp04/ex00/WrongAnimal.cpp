/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jferrer- <jferrer-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 17:34:21 by jferrer-          #+#    #+#             */
/*   Updated: 2022/09/19 17:44:09 by jferrer-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal " << this->type << " has been destroyed\n";
}

WrongAnimal::WrongAnimal(): type("Unknown")
{
	std::cout << "Default constructor for WrongAnimal\n";
}

WrongAnimal::WrongAnimal(const WrongAnimal& copy): type(copy.type)
{
	std::cout << "Copy constructor for WrongAnimal\n";
}

WrongAnimal& WrongAnimal::operator= (const WrongAnimal& op)
{
	std::cout << "Copy operator constructor for WrongAnimal\n";
	this->type = op.type;
	return *this;
}

std::string WrongAnimal::getType() const
{
	return this->type;
}

void	WrongAnimal::makeSound() const
{
	std::cout << "Default WrongAnimal noise\n";
}
