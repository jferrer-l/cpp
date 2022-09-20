/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jferrer- <jferrer-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 18:33:56 by jferrer-          #+#    #+#             */
/*   Updated: 2022/09/19 22:46:26 by jferrer-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::~Cat()
{
	delete(this->brain);
	std::cout << "Cat " << this->type << " has been destroyed\n";
}

Cat::Cat()
{
	this->type = "Cat";
	this->brain = new Brain();
	std::cout << "Default constructor for Cat\n";
}

Cat::Cat(const Cat& copy)
{
	this->type = copy.type;
	this->brain = copy.brain;
	std::cout << "Copy constructor for Cat\n";
}

Cat& Cat::operator= (const Cat& op)
{
	std::cout << "Copy operator constructor for Cat\n";
	this->brain = op.brain;
	this->type = op.type;
	return *this;
}

void Cat::makeSound() const
{
	std::cout << "Meow\n";
}

Brain& Cat::getBrain()
{
	return *this->brain;
}
