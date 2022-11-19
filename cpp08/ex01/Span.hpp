/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jferrer- <jferrer-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 20:21:31 by jferrer-          #+#    #+#             */
/*   Updated: 2022/11/19 03:30:31 by jferrer-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdexcept>
#include <vector>

class Span
{
	private:
	std::vector<int> vec;

	public:
	Span(unsigned int);
	~Span();
	Span(const Span &op);
	Span &operator=(const Span &op);

	void			addNumber(int);

	unsigned int	shortestSpan();
	unsigned int	longestSpan();

	void			printVector();
	unsigned int	getCapacity() const;

	void			fillSpan(int [], int);
	void			fillSpan(int , int);

	class TooManyElements: public std::exception
	{
		virtual const char* what() const throw()
		{
			return ("The span reached the maximum number of elements");
		}
	};

	class NotEnoughtElements: public std::exception
	{
		virtual const char* what() const throw()
		{
			return ("There aren't enought elements in the Span to execute this function");
		}
	};
};

