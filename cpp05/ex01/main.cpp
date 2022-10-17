// /* ************************************************************************** */
// /*                                                                            */
// /*                                                        :::      ::::::::   */
// /*   main.cpp                                           :+:      :+:    :+:   */
// /*                                                    +:+ +:+         +:+     */
// /*   By: jferrer- <jferrer-@student.42.fr>          +#+  +:+       +#+        */
// /*                                                +#+#+#+#+#+   +#+           */
// /*   Created: 2022/09/22 03:28:05 by jferrer-          #+#    #+#             */
// /*   Updated: 2022/09/22 07:33:50 by jferrer-         ###   ########.fr       */
// /*                                                                            */
// /* ************************************************************************** */

// #include <iostream>
// #include <stdexcept>
// #include "Bureaucrat.hpp"
// #include "Form.hpp"

// int main()
// {
// 	Bureaucrat* bur = NULL;
// 	Form* form = NULL;


// 	try
// 	{
// 		bur = new Bureaucrat("bureaucrat", 25);
// 		form = new Form("form", 50, 100);

// 		std::cout << *bur << " And 0 exceptions have been thrown" << std::endl;
// 		std::cout << *form << " And 0 exceptions have been thrown" << std::endl;
// 		delete(bur);
// 		delete(form);
// 	}
// 	catch(std::exception& e)
// 	{
// 		std::cerr << e.what() << std::endl;
// 	}
// 	std::cout << std::endl;
// 	try
// 	{
// 		bur = new Bureaucrat("bureaucrat", 25);
// 		form = new Form("form", 50, 100);

// 		form->beSigned(*bur);
// 		std::cout << *bur << " And 0 exceptions have been thrown" << std::endl;
// 		std::cout << *form << " And 0 exceptions have been thrown" << std::endl;
// 		delete(bur);
// 		delete(form);
// 	}
// 	catch(std::exception& e)
// 	{
// 		std::cerr << e.what() << std::endl;
// 	}
// 	std::cout << std::endl;
// 	try
// 	{
// 		bur = new Bureaucrat("bureaucrat", 75);
// 		form = new Form("form", 50, 100);

// 		form->beSigned(*bur);
// 		std::cout << *bur << " And 0 exceptions have been thrown" << std::endl;
// 		std::cout << *form << " And 0 exceptions have been thrown" << std::endl;
// 		delete(bur);
// 		delete(form);
// 	}
// 	catch(std::exception& e)
// 	{
// 		std::cerr << e.what() << std::endl;
// 		delete(bur);
// 		delete(form);
// 	}
// 	std::cout << std::endl;
// 	try
// 	{
// 		bur = new Bureaucrat("bureaucrat", 75);
// 		form = new Form("form", 50, 1000);

// 		form->beSigned(*bur);
// 		std::cout << *bur << " And 0 exceptions have been thrown" << std::endl;
// 		std::cout << *form << " And 0 exceptions have been thrown" << std::endl;
// 		delete(bur);
// 		delete(form);
// 	}
// 	catch(std::exception& e)
// 	{
// 		std::cerr << e.what() << std::endl;
// 		delete(bur);
// 	}
// 	std::cout << std::endl;

// 	return (0);
// }

#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	std::cout << "INTENTO CREAR DOS FORMS CON SIGNATURE GRADE 0 Y 151" << std::endl;

	try
	{
		Form f1("F0001", 10, 0);
		std::cout << "Parece que funciona bien" << std::endl;
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		Form f2("F0002", 10, 151);
		std::cout << "Parece que funciona bien" << std::endl;
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << "\nINTENTO CREAR DOS FORMS CON EXECUTION GRADE 0 Y 151" << std::endl;

	try
	{
		Form f3("F0003", 0, 10);
		std::cout << "Parece que funciona bien" << std::endl;
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		Form f4("F0004", 151, 10);
		std::cout << "Parece que funciona bien" << std::endl;
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << "\nINTENTO FIRMAR UN FORMULARIO SIN EL LVL CORRECTO" << std::endl;
	try
	{
		Bureaucrat	Marc = Bureaucrat("Marc", 150);
		Form f5("F0005", 1, 10);
		std::cout << f5 << std::endl;
		Marc.signForm(f5);
		std::cout << f5 << std::endl;
		std::cout << "Parece que funciona bien" << std::endl;
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << "\nINTENTO FIRMAR UN FORMULARIO CON EL LVL CORRECTO" << std::endl;
	try
	{
		Bureaucrat	Marc = Bureaucrat("Marc", 1);
		Form f6("F0006", 1, 1);
		std::cout << f6 << std::endl;
		Marc.signForm(f6);
		std::cout << f6 << std::endl;
		std::cout << "Parece que funciona bien" << std::endl;
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << "\nINTENTO FIRMAR UN FORMULARIO DESDE EL PROPIO FORMULARIO SIN GRADO SUFICIENTE" << std::endl;
	try
	{
		Bureaucrat	Marc = Bureaucrat("Marc", 150);
		Form f8("F0005", 1, 10);
		std::cout << f8 << std::endl;
		f8.beSigned(Marc);
		std::cout << f8 << std::endl;
		std::cout << "Parece que funciona bien" << std::endl;
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}


	std::cout << "\nTEST GETTERS" << std::endl;
	Form f7("F0007", 10, 101);
	std::cout << "Formualrio name: " << f7.getName() << std::endl;
	std::cout << "Execution Grade: " << f7.getExecuteGrade() << std::endl;
	std::cout << "Sigture Grade: " << f7.getSignGrade() << std::endl;
	std::cout << "Is signed: " << f7.getSign() << std::endl;


	return(0);
}
