/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jferrer- <jferrer-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 20:55:06 by jferrer-          #+#    #+#             */
/*   Updated: 2022/09/11 01:04:56 by jferrer-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(): number(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int value): number(value << 8)
{
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float value)
{
	std::cout << "Float constructor called" << std::endl;
	number = roundf(value * (1 << point));
}

Fixed::Fixed(const Fixed& copy): number(copy.getRawBits())
{
	std::cout << "Copy constructor called" << std::endl;
	//this->number = copy.getRawBits();
}

Fixed&	Fixed::operator= (const Fixed& fixed)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->number = fixed.getRawBits();
	return *this;
}

int		Fixed::getRawBits(void) const
{
	//std::cout << "getRawBits member function called" << std::endl;
	return (this->number);
}

void	Fixed::setRawBits(int const raw)
{
	this->number = raw;
}

float	Fixed::toFloat(void) const
{
	float to_return = 0.0;
	float	exponent = 1.0;
	int temp = number;
	for (int i = 0; i < point; i++)
		exponent /= 2;
	for (int i = 0; i < point; i++)
	{
		to_return += (temp & 1) * exponent;
		temp >>= 1;
		exponent *= 2;
	}
	to_return += temp;
	return (to_return);
}

int		Fixed::toInt(void) const
{
	int	temp = number;
	temp >>= point;
	return (temp);
}

std::ostream& operator<<(std::ostream& out, Fixed const& N)
{
	out << N.toFloat();
	return out;
}
