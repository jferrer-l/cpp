/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jferrer- <jferrer-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 07:53:21 by jferrer-          #+#    #+#             */
/*   Updated: 2022/09/22 12:10:00 by jferrer-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <stdexcept>
#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include <ctime>

RobotomyRequestForm::~RobotomyRequestForm(){}

RobotomyRequestForm::RobotomyRequestForm(const std::string target): AForm("robotomy", 72, 45), target(target)
{}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm & copy): AForm(copy), target(copy.target)
{}

RobotomyRequestForm & RobotomyRequestForm::operator=(const RobotomyRequestForm & op)
{
	if (&op == this)
		return *this;
	this->target = op.target;
	return *this;
}

void RobotomyRequestForm::executor() const
{
	std::srand(std::time(nullptr));
	int rand = std::rand();
	std::cout << "* Drilling Noises *\n";
	if (rand % 2)
		std::cout << this->target << " has been robotomized successfully.\n";
	else
		std::cout << this->target << " the robotomy failed.\n";
}
