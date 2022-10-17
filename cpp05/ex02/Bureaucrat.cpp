/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jferrer- <jferrer-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 03:28:00 by jferrer-          #+#    #+#             */
/*   Updated: 2022/10/17 11:04:42 by jferrer-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <stdexcept>
#include "AForm.hpp"

Bureaucrat::~Bureaucrat(){}

Bureaucrat::Bureaucrat(std::string name, int grade): name(name)
{
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	this->grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat & copy): name(copy.name), grade(copy.grade)
{}

Bureaucrat & Bureaucrat::operator=(const Bureaucrat & op)
{
	if (&op == this)
		return *this;
	this->grade = op.grade;
	return *this;

}

const std::string & Bureaucrat::getName() const
{
	return (this->name);
}

int	Bureaucrat::getGrade() const
{
	return (this->grade);
}

void	Bureaucrat::increaseGrade()
{
	if (this->grade == 1)
		throw Bureaucrat::GradeTooHighException();
	this->grade--;
}

void	Bureaucrat::decreaseGrade()
{
	if (this->grade == 150)
		throw Bureaucrat::GradeTooLowException();
	this->grade++;
}

std::ostream& operator<<(std::ostream& out, const Bureaucrat & B)
{
	out << B.getName() << ", bureaucrat grade " << B.getGrade() << '.';
	return out;
}

void Bureaucrat::signForm(AForm & form) const
{
	if (form.getSignGrade() < this->grade)
		std::cout << this->name << " couldn’t sign " <<  form.getName() << "because the bureaucrat grade wasn't high enought.\n";
	else
		std::cout << this->name << " signed " << form.getName() << std::endl;
	form.beSigned(*this);
}

void Bureaucrat::executeForm(AForm const & form) const
{
	if (form.getSign() == false || form.getExecuteGrade() < this->grade)
		std::cout << this->name << " couldn’t execute " <<  form.getName() << std::endl;
	else
		std::cout << this->name << " executed " << form.getName() << std::endl;
}
