/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jferrer- <jferrer-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 17:34:26 by jferrer-          #+#    #+#             */
/*   Updated: 2022/09/19 17:37:00 by jferrer-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::~WrongCat()
{
	std::cout << "WrongCat " << this->type << " has been destroyed\n";
}

WrongCat::WrongCat()
{
	this->type = "WrongCat";
	std::cout << "Default constructor for WrongCat\n";
}

WrongCat::WrongCat(const WrongCat& copy)
{
	this->type = copy.type;
	std::cout << "Copy constructor for WrongCat\n";
}

WrongCat& WrongCat::operator= (const WrongCat& op)
{
	std::cout << "Copy operator constructor for WrongCat\n";
	this->type = op.type;
	return *this;
}

void WrongCat::makeSound() const
{
	std::cout << "Meow\n";
}
