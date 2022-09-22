/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jferrer- <jferrer-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 03:28:05 by jferrer-          #+#    #+#             */
/*   Updated: 2022/09/22 12:45:24 by jferrer-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdexcept>
#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
	Bureaucrat* bur = NULL;
	PresidentialPardonForm* pres = NULL;
	RobotomyRequestForm* robot = NULL;
	ShrubberyCreationForm* shrub = NULL;
	// AForm* form = NULL;
	(void)pres;


	try
	{
		bur = new Bureaucrat("bureaucrat", 25);
		pres = new PresidentialPardonForm("pres");

		std::cout << *pres << std::endl;
		pres->beSigned(*bur);
		delete(bur);
	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;
	try
	{
		bur = new Bureaucrat("bureaucrat", 5);
		pres = new PresidentialPardonForm("pres");

		std::cout << *pres << std::endl;
		pres->execute(*bur);
		delete(bur);
		delete(pres);
	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;
	try
	{
		bur = new Bureaucrat("bureaucrat", 5);
		pres = new PresidentialPardonForm("pres");

		std::cout << *pres << std::endl;
		pres->beSigned(*bur);
		pres->execute(*bur);
		delete(bur);
		delete(pres);
	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;
	try
	{
		bur = new Bureaucrat("bureaucrat", 5);
		robot = new RobotomyRequestForm("robot");

		std::cout << *pres << std::endl;
		robot->beSigned(*bur);
		robot->execute(*bur);
		delete(bur);
		delete(robot);
	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;
	try
	{
		bur = new Bureaucrat("bureaucrat", 5);
		shrub = new ShrubberyCreationForm("shrub");

		std::cout << *shrub << std::endl;
		shrub->beSigned(*bur);
		shrub->execute(*bur);
		delete(bur);
		delete(shrub);
	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;

	return (0);
}
