/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jferrer- <jferrer-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 18:33:49 by jferrer-          #+#    #+#             */
/*   Updated: 2022/09/19 17:49:08 by jferrer-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::~Animal()
{
	std::cout << "Animal " << this->type << " has been destroyed\n";
}

Animal::Animal(): type("Unknown")
{
	std::cout << "Default constructor for Animal\n";
}

Animal::Animal(const Animal& copy): type(copy.type)
{
	std::cout << "Copy constructor for Animal\n";
}

Animal& Animal::operator= (const Animal& op)
{
	std::cout << "Copy operator constructor for Animal\n";
	this->type = op.type;
	return *this;
}

std::string Animal::getType() const
{
	return this->type;
}

void	Animal::makeSound() const
{
	std::cout << "Default animal noise\n";
}
