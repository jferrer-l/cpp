/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jferrer- <jferrer-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 18:27:11 by jferrer-          #+#    #+#             */
/*   Updated: 2022/11/14 18:53:38 by jferrer-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

template <typename T>
void	swap(T & x, T & y)
{
	T temp;
	temp = x;
	x = y;
	y = temp;
}

template <typename T>
T const & min(T const & x, T const & y)
{
	return (y<=x ? y : x);
}

template <typename T>
T const & max(T const & x, T const & y)
{
	return (y>=x ? y : x);
}

#endif
