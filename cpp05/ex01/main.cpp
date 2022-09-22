/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jferrer- <jferrer-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 03:28:05 by jferrer-          #+#    #+#             */
/*   Updated: 2022/09/22 07:33:50 by jferrer-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdexcept>
#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	Bureaucrat* bur = NULL;
	Form* form = NULL;


	try
	{
		bur = new Bureaucrat("bureaucrat", 25);
		form = new Form("form", 50, 100);

		std::cout << *bur << " And 0 exceptions have been thrown" << std::endl;
		std::cout << *form << " And 0 exceptions have been thrown" << std::endl;
		delete(bur);
		delete(form);
	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;
	try
	{
		bur = new Bureaucrat("bureaucrat", 25);
		form = new Form("form", 50, 100);

		form->beSigned(*bur);
		std::cout << *bur << " And 0 exceptions have been thrown" << std::endl;
		std::cout << *form << " And 0 exceptions have been thrown" << std::endl;
		delete(bur);
		delete(form);
	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;
	try
	{
		bur = new Bureaucrat("bureaucrat", 75);
		form = new Form("form", 50, 100);

		form->beSigned(*bur);
		std::cout << *bur << " And 0 exceptions have been thrown" << std::endl;
		std::cout << *form << " And 0 exceptions have been thrown" << std::endl;
		delete(bur);
		delete(form);
	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << std::endl;
		delete(bur);
		delete(form);
	}
	std::cout << std::endl;
	try
	{
		bur = new Bureaucrat("bureaucrat", 75);
		form = new Form("form", 50, 1000);

		form->beSigned(*bur);
		std::cout << *bur << " And 0 exceptions have been thrown" << std::endl;
		std::cout << *form << " And 0 exceptions have been thrown" << std::endl;
		delete(bur);
		delete(form);
	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << std::endl;
		delete(bur);
	}
	std::cout << std::endl;

	return (0);
}