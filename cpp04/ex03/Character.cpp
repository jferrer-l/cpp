/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jferrer- <jferrer-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 22:38:27 by jferrer-          #+#    #+#             */
/*   Updated: 2022/09/20 22:38:38 by jferrer-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(const std::string& name): name(name)
{
	for (int i = 0; i < 4; i++)
		this->slots[i] = NULL;
}

Character::Character(const Character& copy): name(copy.getName())
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

Character::~Character()
{
	for (int i = 0; i < 4; i++)
		if (this->slots[i])
			delete(this->slots[i]);
}

Character & Character::operator=(const Character& op)
{
	if (this == &op)
		return (*this);
	this->name = op.getName();
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

std::string const & Character::getName() const
{
	return (this->name);
}

void	Character::equip(AMateria* materia)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->slots[i] == NULL)
		{
			this->slots[i] = materia;
			break;
		}
	}
	/*
	int i = 0;

	for (i = 0; i < 4 && this->_inv[i] != NULL; i++);

	if (i < 4)
		this->_inv[i] = m;
		*/
}

void	Character::unequip(int index)
{
	if (this->slots[index] && index >= 0 && index < 4)
		this->slots[index] = NULL;
}

void	Character::use(int index, ICharacter& target)
{
	if (index >= 0 && index < 4 && this->slots[index])
		this->slots[index]->use(target);
}
