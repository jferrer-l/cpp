/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   overloads.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jferrer- <jferrer-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 01:16:19 by jferrer-          #+#    #+#             */
/*   Updated: 2022/09/11 02:33:55 by jferrer-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

bool	Fixed::operator== (const Fixed& N) const
{
	if (this->getRawBits() == N.getRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator!= (const Fixed& N) const
{
	if (this->getRawBits() != N.getRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator>= (const Fixed& N) const
{
	if (this->getRawBits() >= N.getRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator<= (const Fixed& N) const
{
	if (this->getRawBits() <= N.getRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator> (const Fixed& N) const
{
	if (this->getRawBits() > N.getRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator< (const Fixed& N) const
{
	if (this->getRawBits() < N.getRawBits())
		return (true);
	return (false);
}

Fixed	Fixed::operator+ (const Fixed& N) const
{
	Fixed ret;
	ret.setRawBits(this->number + N.getRawBits());
	return (ret);
}

Fixed	Fixed::operator- (const Fixed& N) const
{
	Fixed ret;
	ret.setRawBits(this->number - N.getRawBits());
	return (ret);
}

Fixed	Fixed::operator* (const Fixed& N) const
{
	Fixed ret;
	float temp = this->toFloat() * N.toFloat();
	ret.setRawBits(roundf(temp * (1 << point)));
	return (ret);
}

Fixed	Fixed::operator/ (const Fixed& N) const
{
	Fixed ret;
	float temp = this->toFloat() / N.toFloat();
	ret.setRawBits(roundf(temp * (1 << point)));
	return (ret);
}

Fixed& Fixed::operator++()
{
	number++;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed p = *this;
	++*this;
	return (p);
}

Fixed& Fixed::operator--()
{
	number--;
	return (*this);
}

Fixed Fixed::operator--(int)
{
	Fixed p = *this;
	--*this;
	return (p);
}
