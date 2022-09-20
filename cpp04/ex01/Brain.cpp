/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jferrer- <jferrer-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 20:15:16 by jferrer-          #+#    #+#             */
/*   Updated: 2022/09/19 22:15:01 by jferrer-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::~Brain()
{
	std::cout << "Brain has been destroyed\n";
}

Brain::Brain()
{
	std::cout << "Default constructor for Brain\n";
}

Brain::Brain(const Brain& copy)
{
	std::cout << "Copy constructor for Brain\n";
	for (unsigned int i = 0; i < sizeof(this->ideas); i++)
		this->ideas[i] = copy.ideas[i];
}

Brain& Brain::operator= (const Brain& op)
{
	std::cout << "Copy operator constructor for Brain\n";
	for (unsigned int i = 0; i < sizeof(this->ideas); i++)
		this->ideas[i] = op.ideas[i];
	return *this;
}
