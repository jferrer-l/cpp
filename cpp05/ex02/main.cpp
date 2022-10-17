// /* ************************************************************************** */
// /*                                                                            */
// /*                                                        :::      ::::::::   */
// /*   main.cpp                                           :+:      :+:    :+:   */
// /*                                                    +:+ +:+         +:+     */
// /*   By: jferrer- <jferrer-@student.42.fr>          +#+  +:+       +#+        */
// /*                                                +#+#+#+#+#+   +#+           */
// /*   Created: 2022/09/22 03:28:05 by jferrer-          #+#    #+#             */
// /*   Updated: 2022/09/22 12:45:24 by jferrer-         ###   ########.fr       */
// /*                                                                            */
// /* ************************************************************************** */

// #include <iostream>
// #include <stdexcept>
// #include "Bureaucrat.hpp"
// #include "AForm.hpp"
// #include "PresidentialPardonForm.hpp"
// #include "RobotomyRequestForm.hpp"
// #include "ShrubberyCreationForm.hpp"

// int main()
// {
// 	Bureaucrat* bur = NULL;
// 	PresidentialPardonForm* pres = NULL;
// 	RobotomyRequestForm* robot = NULL;
// 	ShrubberyCreationForm* shrub = NULL;
// 	// AForm* form = NULL;
// 	(void)pres;


// 	try
// 	{
// 		bur = new Bureaucrat("bureaucrat", 25);
// 		pres = new PresidentialPardonForm("pres");

// 		std::cout << *pres << std::endl;
// 		pres->beSigned(*bur);
// 		delete(bur);
// 	}
// 	catch(std::exception& e)
// 	{
// 		std::cerr << e.what() << std::endl;
// 	}
// 	std::cout << std::endl;
// 	try
// 	{
// 		bur = new Bureaucrat("bureaucrat", 5);
// 		pres = new PresidentialPardonForm("pres");

// 		std::cout << *pres << std::endl;
// 		pres->execute(*bur);
// 		delete(bur);
// 		delete(pres);
// 	}
// 	catch(std::exception& e)
// 	{
// 		std::cerr << e.what() << std::endl;
// 	}
// 	std::cout << std::endl;
// 	try
// 	{
// 		bur = new Bureaucrat("bureaucrat", 5);
// 		pres = new PresidentialPardonForm("pres");

// 		std::cout << *pres << std::endl;
// 		pres->beSigned(*bur);
// 		pres->execute(*bur);
// 		delete(bur);
// 		delete(pres);
// 	}
// 	catch(std::exception& e)
// 	{
// 		std::cerr << e.what() << std::endl;
// 	}
// 	std::cout << std::endl;
// 	try
// 	{
// 		bur = new Bureaucrat("bureaucrat", 5);
// 		robot = new RobotomyRequestForm("robot");

// 		std::cout << *pres << std::endl;
// 		robot->beSigned(*bur);
// 		robot->execute(*bur);
// 		delete(bur);
// 		delete(robot);
// 	}
// 	catch(std::exception& e)
// 	{
// 		std::cerr << e.what() << std::endl;
// 	}
// 	std::cout << std::endl;
// 	try
// 	{
// 		bur = new Bureaucrat("bureaucrat", 5);
// 		shrub = new ShrubberyCreationForm("shrub");

// 		std::cout << *shrub << std::endl;
// 		shrub->beSigned(*bur);
// 		shrub->execute(*bur);
// 		delete(bur);
// 		delete(shrub);
// 	}
// 	catch(std::exception& e)
// 	{
// 		std::cerr << e.what() << std::endl;
// 	}
// 	std::cout << std::endl;

// 	return (0);
// }

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "AForm.hpp"
int	main(void)
{
	AForm			*form = NULL;
	Bureaucrat		bob("bob", 1);
	Bureaucrat		phil("phil", 46);
	Bureaucrat		luc("luc", 150);

	// std::cout << "TEST FORM IS NOW A ABSTRACT CLASS" << std::endl;
	// form = new Form("28Z");



	std::cout << "TEST EXECUTE PRESIDENTIAL FORM WHITOUT SIGN" << std::endl;
	try
	{
		form = new PresidentialPardonForm("28Z");
		std::cout << "Siganture Gade: " << form->getSignGrade() << std::endl;
		std::cout << "Execution Gade: " << form->getExecuteGrade() << std::endl;
		form->execute(bob);
		delete form;
		form = NULL;
	}
	catch (std::exception &e)
	{
		delete form;
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;

	std::cout << "TEST PRESIDENTIAL FORM SIGNED AND EXECUTED BE LVL 1" << std::endl;

	try
	{
		form = new PresidentialPardonForm("28A");
		form->beSigned(bob);
		form->execute(bob);
		delete form;
		form = NULL;
	}
	catch (std::exception &e)
	{
		delete form;
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;

	std::cout << "TEST PRESIDENTIAL FORM SIGNED AND EXECUTED BE LVL 150" << std::endl;
	try
	{
		form = new PresidentialPardonForm("28A");
		form->beSigned(luc);
		form->execute(luc);
		delete form;
		form = NULL;
	}
	catch (std::exception &e)
	{
		delete form;
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;


	std::cout << "TEST EXECUTE ROBOTOMYREQUEST FORM WHITOUT SIGN" << std::endl;
	try
	{
		form = new RobotomyRequestForm("28Z");
		std::cout << "Siganture Gade: " << form->getSignGrade() << std::endl;
		std::cout << "Execution Gade: " << form->getExecuteGrade() << std::endl;
		form->execute(bob);
		delete form;
		form = NULL;
	}
	catch (std::exception &e)
	{
		delete form;
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;

	std::cout << "TEST ROBOTOMYREQUEST FORM SIGNED AND EXECUTED BE LVL 1" << std::endl;

	try
	{
		form = new RobotomyRequestForm("28A");
		form->beSigned(bob);
		form->execute(bob);
		delete form;
		form = NULL;
	}
	catch (std::exception &e)
	{
		delete form;
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;

	std::cout << "TEST ROBOTOMYREQUEST FORM SIGNED BUT NOT ENOGHT LEVEL TO EXECUTE" << std::endl;

	try
	{
		form = new RobotomyRequestForm("28A");
		phil.signForm(*form);
		form->execute(phil);
		delete form;
		form = NULL;
	}
	catch (std::exception &e)
	{
		delete form;
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;

	std::cout << "TEST ROBOTOMYREQUEST FORM SIGNED AND EXECUTED BE LVL 150" << std::endl;
	try
	{
		form = new RobotomyRequestForm("28A");
		form->beSigned(luc);
		form->execute(luc);
		delete form;
		form = NULL;
	}
	catch (std::exception &e)
	{
		delete form;
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;


	std::cout << "TEST ROBOTOMYREQUEST MULTIPLE EXECUTIONS" << std::endl;
	try
	{
		form = new RobotomyRequestForm("28B");
		form->beSigned(bob);
		form->execute(phil);
		form->execute(phil);
		form->execute(phil);
		form->execute(phil);
		form->execute(phil);
		form->execute(phil);
		form->execute(phil);
		form->execute(phil);
		form->execute(phil);
		delete form;
		form = NULL;
	}
	catch (std::exception &e)
	{
		delete form;
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;

	std::cout << "TEST EXECUTE SHRUBERRYCREATION FORM WHITOUT SIGN" << std::endl;
	try
	{
		form = new ShrubberyCreationForm("28Z");
		std::cout << "Siganture Gade: " << form->getSignGrade() << std::endl;
		std::cout << "Execution Gade: " << form->getExecuteGrade() << std::endl;
		form->execute(bob);
		delete form;
		form = NULL;
	}
	catch (std::exception &e)
	{
		delete form;
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;

	std::cout << "TEST SHRUBERRYCREATION FORM SIGNED AND EXECUTED BE LVL 1" << std::endl;

	try
	{
		form = new ShrubberyCreationForm("28A");
		form->beSigned(bob);
		form->execute(bob);
		delete form;
		form = NULL;
	}
	catch (std::exception &e)
	{
		delete form;
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;

	std::cout << "TEST SHRUBERRYCREATION FORM SIGNED AND EXECUTED BE LVL 150" << std::endl;
	try
	{
		form = new ShrubberyCreationForm("28A");
		form->beSigned(luc);
		form->execute(luc);
		delete form;
		form = NULL;
	}
	catch (std::exception &e)
	{
		delete form;
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;



	try
	{
		form = new ShrubberyCreationForm("Home");
		form->beSigned(bob);
		form->execute(phil);
		form->execute(luc);
		delete form;
		form = NULL;
	}
	catch (std::exception &e)
	{
		delete form;
		std::cout << e.what() << std::endl;
	}

	// delete bob;
	// delete phil;
	// delete luc;
	return (0);
}
