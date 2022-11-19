/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jferrer- <jferrer-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 20:21:26 by jferrer-          #+#    #+#             */
/*   Updated: 2022/11/19 03:38:35 by jferrer-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <ctime>
#include "Span.hpp"

int main()
{
	Span s1(5);
	Span s2(2);

	s1.printVector();
	s2.printVector();

	s1.addNumber(5);
	s1.addNumber(9);
	s1.addNumber(79);

	s2 = s1;

	s1.printVector();
	s2.printVector();

	s2.addNumber(1);
	s2.addNumber(4);
	try
	{
		s2.addNumber(3);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	s1.printVector();
	s2.printVector();

	s1.shortestSpan();
	s2.shortestSpan();

	s1.longestSpan();
	s2.longestSpan();

	try
	{
		Span s3(1);
		s3.longestSpan();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	{
		std::srand(unsigned(std::time(nullptr)));
		Span big(10000000);
		for (int i = 0; i < 10000000; i++)
			big.addNumber(std::rand() % 10000000);

		//big.printVector();
		big.shortestSpan();
		big.longestSpan();

	}

	{
		Span s4(9);

		int array[] = {1, 2, 3, 4, 5, 6};
		s4.fillSpan(array, sizeof(array)/sizeof(array[0]));
		s4.fillSpan(3, 9);
		s4.printVector();
		try
		{
			s4.fillSpan(2, 11);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}

	}
}
