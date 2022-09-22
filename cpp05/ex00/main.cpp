/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jferrer- <jferrer-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 03:28:05 by jferrer-          #+#    #+#             */
/*   Updated: 2022/09/22 06:45:12 by jferrer-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdexcept>
# include "Bureaucrat.hpp"

int main()
{
	Bureaucrat* first = NULL;// = new Bureaucrat("first", 50);
	Bureaucrat* second = NULL;// = new Bureaucrat("second", 50);

	try
	{
		first = new Bureaucrat("first", 150);
		second = new Bureaucrat("second", 1);

		std::cout << *first << " And 0 exceptions have been thrown" << std::endl;
		std::cout << *second << " And 0 exceptions have been thrown" << std::endl;
		delete(first);
		delete(second);
	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << std::endl;
		if (first != NULL)
			delete(first);
		if (second != NULL)
			delete(second);
	}
	std::cout << std::endl;
	try
	{
		first = new Bureaucrat("first", 151);
		second = new Bureaucrat("second", 1);

		std::cout << *first << " And 0 exceptions have been thrown" << std::endl;
		std::cout << *second << " And 0 exceptions have been thrown" << std::endl;
		delete(first);
		delete(second);
	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;
	try
	{
		first = new Bureaucrat("first", 150);
		second = new Bureaucrat("second", 0);

		std::cout << *first << " And 0 exceptions have been thrown" << std::endl;
		std::cout << *second << " And 0 exceptions have been thrown" << std::endl;
		delete(first);
		delete(second);
	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << std::endl;
		delete(first);
	}
	std::cout << std::endl;
	try
	{
		first = new Bureaucrat("first", 150);
		second = new Bureaucrat("second", 1);

		first->decreaseGrade();
		std::cout << *first << " And 0 exceptions have been thrown" << std::endl;
		std::cout << *second << " And 0 exceptions have been thrown" << std::endl;
		delete(first);
		delete(second);
	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;
	try
	{
		first = new Bureaucrat("first", 150);
		second = new Bureaucrat("second", 1);

		second->increaseGrade();
		std::cout << *first << " And 0 exceptions have been thrown" << std::endl;
		std::cout << *second << " And 0 exceptions have been thrown" << std::endl;
		delete(first);
		delete(second);
	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << std::endl;
		delete(first);
	}
	std::cout << std::endl;
	try
	{
		first = new Bureaucrat("first", 50);
		second = new Bureaucrat("second", 100);

		std::cout << *first << " And 0 exceptions have been thrown" << std::endl;
		first->decreaseGrade();
		std::cout << *first << " And 0 exceptions have been thrown" << std::endl;
		std::cout << "Grade decreased\n";
		std::cout << *second << " And 0 exceptions have been thrown" << std::endl;
		second->increaseGrade();
		std::cout << *second << " And 0 exceptions have been thrown" << std::endl;
		std::cout << "Grade increased\n";
		delete(first);
		delete(second);
	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	return (0);
}
