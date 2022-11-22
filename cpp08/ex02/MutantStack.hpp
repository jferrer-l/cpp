/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jferrer- <jferrer-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 22:10:11 by jferrer-          #+#    #+#             */
/*   Updated: 2022/11/22 20:52:38 by jferrer-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stack>
#include <list>
#include <algorithm>

template <typename T>
class MutantStack: public std::stack<T>
{
	public:

	typedef typename std::stack<T>::container_type::iterator iterator;

	MutantStack(): std::stack<T>() {}
	~MutantStack(){}
	MutantStack(const MutantStack &op): std::stack<T>(op) {}
	MutantStack &operator=(const MutantStack &op)
	{
		if (this == &op)
			return *this;
		std::stack<T>::operator=(op);
		return *this;
	}

	iterator	begin(){return std::stack<T>::c.begin();}
	iterator	end(){return std::stack<T>::c.end();}
};
