/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jferrer- <jferrer-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 20:55:00 by jferrer-          #+#    #+#             */
/*   Updated: 2022/09/11 02:24:02 by jferrer-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
private:
	int	number;
	static const int point = 8;
public:
	~Fixed();
	Fixed();
	Fixed(const int value);
	Fixed(const float value);
	Fixed(const Fixed& copy);
	Fixed& operator=(const Fixed& assignment);
	Fixed operator+(const Fixed& assignment) const;
	Fixed operator-(const Fixed& assignment) const;
	Fixed operator*(const Fixed& assignment) const;
	Fixed operator/(const Fixed& assignment) const;

	bool operator==(Fixed const& N) const;
	bool operator!=(Fixed const& N) const;
	bool operator>=(Fixed const& N) const;
	bool operator<=(Fixed const& N) const;
	bool operator>(Fixed const& N) const;
	bool operator<(Fixed const& N) const;

	Fixed& operator++();
	Fixed operator++(int);
	Fixed& operator--();
	Fixed operator--(int);

	static Fixed& min(Fixed& l, Fixed& r);
	static Fixed min(const Fixed& l, const Fixed& r);
	static Fixed& max(Fixed& l, Fixed& r);
	static Fixed max(const Fixed& l, const Fixed& r);

	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	float	toFloat(void) const;
	int		toInt(void) const;

};

std::ostream& operator<<(std::ostream& out, Fixed const& N);

#endif
