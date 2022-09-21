/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jferrer- <jferrer-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 04:54:56 by jferrer-          #+#    #+#             */
/*   Updated: 2022/09/21 05:17:32 by jferrer-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; i++)
		this->slots[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource& copy)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->slots[i])
			delete(this->slots[i]);
		if (copy.slots[i])
			this->slots[i] = copy.slots[i];
		else
			this->slots[i] = NULL;
	}
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
		if (this->slots[i])
			delete(this->slots[i]);
}

MateriaSource & MateriaSource::operator=(const MateriaSource& op)
{
	if (this == &op)
		return (*this);
	for (int i = 0; i < 4; i++)
	{
		if (this->slots[i])
			delete(this->slots[i]);
		if (op.slots[i])
			this->slots[i] = op.slots[i];
		else
			this->slots[i] = NULL;
	}
	return (*this);
}

void MateriaSource::learnMateria(AMateria* newmateria)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->slots[i] != NULL)
		{
			this->slots[i] = newmateria;
			break;
		}
	}
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->slots[i]->getType() == type && this->slots[i] != NULL)
			return (this->slots[i]->clone());
	}
	return (0);
}
