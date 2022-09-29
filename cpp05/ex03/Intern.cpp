/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jferrer- <jferrer-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 14:14:45 by jferrer-          #+#    #+#             */
/*   Updated: 2022/09/29 11:58:45 by jferrer-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

Intern::~Intern(){}
Intern::Intern(){}
Intern::Intern(const Intern & copy){(void)copy;}
Intern & Intern::operator=(const Intern & op)
{
	if (this == &op)
		return *this;
	return *this;
}

AForm* Intern::makeForm(std::string const & name, std::string const& target)
{
	int index = -1;
	AForm* form;
	enum temp {presidential, robotomy, shrubbery};
	std::string	strnames[3] = {"presidential", "robotomy", "shrubbery"};
	form = NULL;
	while (++index < 4)
		if (name == strnames[index])
			break ;
	switch (index)
	{
	case presidential:
		std::cout << "Intern creates presidential" << std::endl;
		return (new PresidentialPardonForm(target));
		break;

	case robotomy:
		std::cout << "Intern creates robotomy" << std::endl;
		return (new RobotomyRequestForm(target));
		break;

	case shrubbery:
		std::cout << "Intern creates shrubbery" << std::endl;
		return (new ShrubberyCreationForm(target));
		break;

	default:
		std::cout << "Intern cannot create the form." << std::endl;
		break;
	}
	return (form);
}
