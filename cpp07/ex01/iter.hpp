/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jferrer- <jferrer-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 18:54:45 by jferrer-          #+#    #+#             */
/*   Updated: 2022/11/14 19:39:15 by jferrer-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#ifndef ITER_HPP
#define ITER_HPP

template<typename T>
void	iter(T v[], int length, void (*func)(T &))
{
	for (int i = 0; i < length; i++)
		func(v[i]);
}

template <typename T>
void	increase(T & i)
{
	std::cout << "Array slot = " << i << std::endl;
}

#endif
