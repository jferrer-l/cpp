/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jferrer- <jferrer-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 20:55:00 by jferrer-          #+#    #+#             */
/*   Updated: 2022/09/10 22:47:24 by jferrer-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

//#define EPSILON 1.0e-7
//#define flt_equals(a, b) (std::fabs((a)-(b)) < EPSILON)

class Fixed
{
private:
	int	number;
	static const int point = 8;

public:
	~Fixed();
	Fixed();
	Fixed(const Fixed& copy);
	Fixed& operator= (const Fixed& assignment);

	int		getRawBits(void) const;
	void	setRawBits(int const raw);
};

#endif
