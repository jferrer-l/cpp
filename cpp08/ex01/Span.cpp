/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jferrer- <jferrer-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 20:21:28 by jferrer-          #+#    #+#             */
/*   Updated: 2022/11/19 03:35:49 by jferrer-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <iostream>
#include <vector>
#include <algorithm>

Span::Span(unsigned int size)
{
	vec.reserve(size);
}

Span::~Span()
{
	vec.clear();
}

Span::Span(const Span &op)
{
	vec.reserve(op.getCapacity());
	this->vec = op.vec;
}

Span &Span::operator=(const Span &op)
{
	if (&op == this)
		return *this;
	vec.reserve(op.getCapacity());
	vec = op.vec;
	return *this;
}

unsigned int	Span::getCapacity() const
{
	return this->vec.capacity();
}

void	Span::addNumber(int number)
{
	if (vec.size() < vec.capacity())
		vec.push_back(number);
	else
		throw TooManyElements();
}

unsigned int	Span::shortestSpan()
{
	unsigned int	temp;
	unsigned int	opt;

	if (vec.size() == 0 || vec.size() == 1)
		throw NotEnoughtElements();
	temp = abs(vec[0] - vec[1]);
	for (std::vector<int>::iterator it = vec.begin(), end = vec.end(); it + 1 != end; it++)
		if ((opt = abs(*it - *(it + 1))) < temp)
			temp = opt;
			std::cout << temp << std::endl;
	return temp;
}

unsigned int	Span::longestSpan()
{
	unsigned int	temp;
	unsigned int	opt;

	if (vec.size() == 0 || vec.size() == 1)
		throw NotEnoughtElements();
	temp = abs(vec[0] - vec[1]);
	for (std::vector<int>::iterator it = vec.begin(), end = vec.end(); it + 1 != end; it++)
		if ((opt = abs(*it - *(it + 1))) > temp)
			temp = opt;
			std::cout << temp << std::endl;
	return temp;
}

void	Span::printVector()
{
	std::cout << "v = { ";
	for (unsigned int n = 0; n < vec.size(); n++)
		std::cout << vec[n] << ", ";
	std::cout << "}; capacity = " << vec.capacity() << std::endl;
}

void	Span::fillSpan(int array[], int size)
{
	if (vec.size() + size <= vec.capacity())
		vec.insert(vec.end(), array, array + size);
	else
		throw TooManyElements();

}

void	Span::fillSpan(int size, int value)
{
	if (vec.size() + size <= vec.capacity())
		vec.insert(vec.end(), size, value);
	else
		throw TooManyElements();
}
