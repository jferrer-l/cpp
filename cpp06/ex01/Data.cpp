/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jferrer- <jferrer-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 18:03:25 by jferrer-          #+#    #+#             */
/*   Updated: 2022/10/13 18:10:39 by jferrer-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

Data::~Data()
{}

Data::Data(): intvalue(42), stringvalue("42")
{}

Data::Data(int i, std::string str): intvalue(i), stringvalue(str)
{}

Data::Data(const Data & copy): intvalue(copy.intvalue), stringvalue(copy.stringvalue)
{}

Data & Data::operator=(const Data & op)
{
	if (this == &op)
		return *this;
	this->intvalue = op.intvalue;
	this->stringvalue = op.stringvalue;
	return *this;
}

int	Data::getInt()
{
	return (this->intvalue);
}

std::string	Data::getString()
{
	return (this->stringvalue);
}
