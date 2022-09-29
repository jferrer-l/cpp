/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jferrer- <jferrer-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 03:28:05 by jferrer-          #+#    #+#             */
/*   Updated: 2022/09/29 12:01:43 by jferrer-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdexcept>
#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int main()
{
	{
		Intern someRandomIntern;
		AForm* rrf;
		rrf = someRandomIntern.makeForm("presidential", "Bender1");
		std::cout << rrf->getName() << std::endl;
		rrf->executor();
		rrf = someRandomIntern.makeForm("presidential wrong name", "Benders11");
	}
	std::cout << std::endl;
	{
		Intern someRandomIntern;
		AForm* rrf;
		rrf = someRandomIntern.makeForm("robotomy", "Bender2");
		std::cout << rrf->getName() << std::endl;
		rrf->executor();
		rrf = someRandomIntern.makeForm("robotomy wrong name", "Benders22");
	}
	std::cout << std::endl;
	{
		Intern someRandomIntern;
		AForm* rrf;
		rrf = someRandomIntern.makeForm("shrubbery", "Bender3");
		std::cout << rrf->getName() << std::endl;
		rrf->executor();
		rrf = someRandomIntern.makeForm("shrubbery wrong name", "Benders33");
	}
	std::cout << std::endl;


	return (0);
}
