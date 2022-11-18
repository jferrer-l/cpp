/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jferrer- <jferrer-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 17:14:08 by jferrer-          #+#    #+#             */
/*   Updated: 2022/11/18 19:45:22 by jferrer-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <algorithm>
#include <type_traits>
#include <vector>

class NotFound: public std::exception
{
	virtual const char* what() const throw()
	{
		return ("Element not found");
	}
};


template < template < typename , typename> class T>
typename T<int, std::allocator<int> >::iterator
easyfind(T<int, std::allocator<int> > &type, int i)
{
	typename T<int, std::allocator<int> >::iterator n = std::find(type.begin(), type.end(), i);
	return ( n == type.end() ? throw NotFound() : n);
}

