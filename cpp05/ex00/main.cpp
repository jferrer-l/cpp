// /* ************************************************************************** */
// /*                                                                            */
// /*                                                        :::      ::::::::   */
// /*   main.cpp                                           :+:      :+:    :+:   */
// /*                                                    +:+ +:+         +:+     */
// /*   By: jferrer- <jferrer-@student.42.fr>          +#+  +:+       +#+        */
// /*                                                +#+#+#+#+#+   +#+           */
// /*   Created: 2022/09/22 03:28:05 by jferrer-          #+#    #+#             */
// /*   Updated: 2022/09/22 06:45:12 by jferrer-         ###   ########.fr       */
// /*                                                                            */
// /* ************************************************************************** */

// #include <iostream>
// #include <stdexcept>
// # include "Bureaucrat.hpp"

// int main()
// {
// 	Bureaucrat* first = NULL;// = new Bureaucrat("first", 50);
// 	Bureaucrat* second = NULL;// = new Bureaucrat("second", 50);

// 	try
// 	{
// 		first = new Bureaucrat("first", 150);
// 		second = new Bureaucrat("second", 1);

// 		std::cout << *first << " And 0 exceptions have been thrown" << std::endl;
// 		std::cout << *second << " And 0 exceptions have been thrown" << std::endl;
// 		delete(first);
// 		delete(second);
// 	}
// 	catch(std::exception& e)
// 	{
// 		std::cerr << e.what() << std::endl;
// 		if (first != NULL)
// 			delete(first);
// 		if (second != NULL)
// 			delete(second);
// 	}
// 	std::cout << std::endl;
// 	try
// 	{
// 		first = new Bureaucrat("first", 151);
// 		second = new Bureaucrat("second", 1);

// 		std::cout << *first << " And 0 exceptions have been thrown" << std::endl;
// 		std::cout << *second << " And 0 exceptions have been thrown" << std::endl;
// 		delete(first);
// 		delete(second);
// 	}
// 	catch(std::exception& e)
// 	{
// 		std::cerr << e.what() << std::endl;
// 	}
// 	std::cout << std::endl;
// 	try
// 	{
// 		first = new Bureaucrat("first", 150);
// 		second = new Bureaucrat("second", 0);

// 		std::cout << *first << " And 0 exceptions have been thrown" << std::endl;
// 		std::cout << *second << " And 0 exceptions have been thrown" << std::endl;
// 		delete(first);
// 		delete(second);
// 	}
// 	catch(std::exception& e)
// 	{
// 		std::cerr << e.what() << std::endl;
// 		delete(first);
// 	}
// 	std::cout << std::endl;
// 	try
// 	{
// 		first = new Bureaucrat("first", 150);
// 		second = new Bureaucrat("second", 1);

// 		first->decreaseGrade();
// 		std::cout << *first << " And 0 exceptions have been thrown" << std::endl;
// 		std::cout << *second << " And 0 exceptions have been thrown" << std::endl;
// 		delete(first);
// 		delete(second);
// 	}
// 	catch(std::exception& e)
// 	{
// 		std::cerr << e.what() << std::endl;
// 	}
// 	std::cout << std::endl;
// 	try
// 	{
// 		first = new Bureaucrat("first", 150);
// 		second = new Bureaucrat("second", 1);

// 		second->increaseGrade();
// 		std::cout << *first << " And 0 exceptions have been thrown" << std::endl;
// 		std::cout << *second << " And 0 exceptions have been thrown" << std::endl;
// 		delete(first);
// 		delete(second);
// 	}
// 	catch(std::exception& e)
// 	{
// 		std::cerr << e.what() << std::endl;
// 		delete(first);
// 	}
// 	std::cout << std::endl;
// 	try
// 	{
// 		first = new Bureaucrat("first", 50);
// 		second = new Bureaucrat("second", 100);

// 		std::cout << *first << " And 0 exceptions have been thrown" << std::endl;
// 		first->decreaseGrade();
// 		std::cout << *first << " And 0 exceptions have been thrown" << std::endl;
// 		std::cout << "Grade decreased\n";
// 		std::cout << *second << " And 0 exceptions have been thrown" << std::endl;
// 		second->increaseGrade();
// 		std::cout << *second << " And 0 exceptions have been thrown" << std::endl;
// 		std::cout << "Grade increased\n";
// 		delete(first);
// 		delete(second);
// 	}
// 	catch(std::exception& e)
// 	{
// 		std::cerr << e.what() << std::endl;
// 	}

// 	return (0);
// }

#include <iostream>
#include "Bureaucrat.hpp"

int main()
{
	std::cout << "INTENTO CREAR DOS BURECRAUTS CON GRADE 0 Y 151" << std::endl;

	try
	{
		Bureaucrat marc = Bureaucrat("marc", 0);
		std::cout << "Parece que funciona bien" << std::endl;
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		Bureaucrat marc = Bureaucrat("marc", 151);
		std::cout << "Parece que funciona bien" << std::endl;
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << "\nCREO BURECRAUT CON GRADE 150 Y INTENTO BAJARLE EL NIVEL" << std::endl;
	try
	{
		Bureaucrat marc2 = Bureaucrat("marc2", 150);
		marc2.decreaseGrade();
		std::cout << "Parece que funciona bien" << std::endl;
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << "\nCREO BURECRAUT CON GRADE 1 Y INTENTO SUBIRLE EL NIVEL" << std::endl;
	try
	{
		Bureaucrat marc2 = Bureaucrat("marc2", 1);
		marc2.increaseGrade();
		std::cout << "Parece que funciona bien" << std::endl;
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}


	std::cout << "\nTEST OVERLOAD" << std::endl;

	Bureaucrat marc3 = Bureaucrat("marc3", 149);
	std::cout << marc3 << std::endl;

	std::cout << "\nTEST SUBIR NIVEL Y OVERLOAD" << std::endl;
	marc3.increaseGrade();
	std::cout << marc3 << std::endl;

	std::cout << "\nTEST BAJAR NIVEL Y OVERLOAD" << std::endl;
	marc3.decreaseGrade();
	std::cout << marc3 << std::endl;

	std::cout << "\nTEST GETGRADE Y GETNAME" << std::endl;
	std::cout << "El nombre es: " << marc3.getName() << std::endl;
	std::cout << "El grade es: " << marc3.getGrade() << std::endl;

	std::cout << "\nTEST OVERLOAD DE <<" << std::endl;
	std::cout << marc3 << std::endl;


	return(0);
}
