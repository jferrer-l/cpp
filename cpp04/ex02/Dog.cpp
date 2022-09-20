/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jferrer- <jferrer-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 18:34:02 by jferrer-          #+#    #+#             */
/*   Updated: 2022/09/19 22:47:02 by jferrer-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::~Dog()
{
	delete(this->brain);
	std::cout << "Dog " << this->type << " has been destroyed\n";
}

Dog::Dog()
{
	this->type = "Dog";
	this->brain = new Brain();
	std::cout << "Default constructor for Dog\n";
}

Dog::Dog(const Dog& copy)
{
	this->type = copy.type;
	this->brain = copy.brain;
	std::cout << "Copy constructor for Dog\n";
}

Dog& Dog::operator= (const Dog& op)
{
	std::cout << "Copy operator constructor for Dog\n";
	this->type = op.type;
	this->brain = op.brain;
	return *this;
}

void Dog::makeSound() const
{
	std::cout << "Woof woof\n";
}

Brain& Dog::getBrain()
{
	return *this->brain;
}
