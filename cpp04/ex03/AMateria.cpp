/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jferrer- <jferrer-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 00:43:04 by jferrer-          #+#    #+#             */
/*   Updated: 2022/09/22 02:40:12 by jferrer-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(const AMateria& copy): type(copy.type) {}

AMateria::AMateria(std::string const & type): type(type) {}

AMateria::~AMateria() {}

AMateria & AMateria::operator=(const AMateria& op)
{
	if (this == &op)
		return (*this);
	//this->type = op.type;
	return (*this);
}

std::string const & AMateria::getType() const
{
	return (this->type);
}

void AMateria::use(ICharacter& target)
{
	(void)target;
}
