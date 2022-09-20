/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jferrer- <jferrer-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 18:33:56 by jferrer-          #+#    #+#             */
/*   Updated: 2022/09/19 17:19:57 by jferrer-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::~Cat()
{
	std::cout << "Cat " << this->type << " has been destroyed\n";
}

Cat::Cat()
{
	this->type = "Cat";
	std::cout << "Default constructor for Cat\n";
}

Cat::Cat(const Cat& copy)
{
	this->type = copy.type;
	std::cout << "Copy constructor for Cat\n";
}

Cat& Cat::operator= (const Cat& op)
{
	std::cout << "Copy operator constructor for Cat\n";
	this->type = op.type;
	return *this;
}

void Cat::makeSound() const
{
	std::cout << "Meow\n";
}
