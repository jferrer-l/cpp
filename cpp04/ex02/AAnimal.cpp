/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jferrer- <jferrer-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 18:33:49 by jferrer-          #+#    #+#             */
/*   Updated: 2022/09/19 17:49:08 by jferrer-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::~AAnimal()
{
	std::cout << "AAnimal " << this->type << " has been destroyed\n";
}

AAnimal::AAnimal(): type("Unknown")
{
	std::cout << "Default constructor for AAnimal\n";
}

AAnimal::AAnimal(const AAnimal& copy): type(copy.type)
{
	std::cout << "Copy constructor for AAnimal\n";
}

AAnimal& AAnimal::operator= (const AAnimal& op)
{
	std::cout << "Copy operator constructor for AAnimal\n";
	this->type = op.type;
	return *this;
}

/*std::string AAnimal::getType() const
{
	return this->type;
}*/

void	AAnimal::makeSound() const
{
	std::cout << "Default AAnimal noise\n";
}
