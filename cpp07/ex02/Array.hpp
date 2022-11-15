/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jferrer- <jferrer-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 19:44:42 by jferrer-          #+#    #+#             */
/*   Updated: 2022/11/15 19:51:27 by jferrer-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdexcept>

#ifndef ARRAY_HPP
#define ARRAY_HPP

template<typename T>
class Array
{
	private:
	T * array;
	unsigned int _size;

	public:
	Array(): array(NULL), _size(0){}
	~Array(){ delete[] this->array; }
	Array(const Array &op): _size(op._size)
	{
		this->array = new T[op._size];
		for (unsigned int i = 0; i < this->_size; i++)
			this->array[i] = op.array[i];
	}
	Array &operator=(const Array &op)
	{
		if (&op == this)
			return *this;
		if (this->array)
			delete[] this->array;
		this->array = new T[op._size];
		this->_size = op._size;
		for (unsigned int i = 0; i < this->_size; i++)
			this->array[i] = op.array[i];
		return *this;
	}

	Array(unsigned int n): array(new T[n]), _size(n){}

	unsigned int size()
	{
		return this->_size;
	}

	T & operator[](unsigned int index)
	{
		if (index >= _size || index < 0)
			throw InvalidIndexEeption();
		return array[index];
	}

	class InvalidIndexEeption: public std::exception
	{
		virtual const char* what() const throw()
		{
			return ("Index out of bounds");
		}
	};

};

#endif
