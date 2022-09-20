/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jferrer- <jferrer-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 18:34:02 by jferrer-          #+#    #+#             */
/*   Updated: 2022/09/19 17:32:13 by jferrer-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::~Dog()
{
	std::cout << "Dog " << this->type << " has been destroyed\n";
}

Dog::Dog()
{
	this->type = "Dog";
	std::cout << "Default constructor for Dog\n";
}

Dog::Dog(const Dog& copy)
{
	this->type = copy.type;
	std::cout << "Copy constructor for Dog\n";
}

Dog& Dog::operator= (const Dog& op)
{
	std::cout << "Copy operator constructor for Dog\n";
	this->type = op.type;
	return *this;
}

void Dog::makeSound() const
{
	std::cout << "Woof woof\n";
}
