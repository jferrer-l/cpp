/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jferrer- <jferrer-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 00:43:04 by jferrer-          #+#    #+#             */
/*   Updated: 2022/09/21 05:24:38 by jferrer-         ###   ########.fr       */
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
