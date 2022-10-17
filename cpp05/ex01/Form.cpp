/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jferrer- <jferrer-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 06:33:59 by jferrer-          #+#    #+#             */
/*   Updated: 2022/10/17 11:03:51 by jferrer-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include <stdexcept>
#include "Bureaucrat.hpp"

Form::~Form(){}

Form::Form(const std::string name, const int sign_grade, const int execute_grade): name(name), sign(false), sign_grade(sign_grade), execute_grade(execute_grade)
{
	//std::cout << sign_grade << " " << this->sign_grade << std::endl;
	if (sign_grade < 1 || execute_grade < 1)
		throw Form::GradeTooHighException();
	else if (sign_grade > 150 || execute_grade > 150)
		throw Form::GradeTooLowException();
}

Form::Form(const Form & copy): name(copy.name), sign(copy.sign), sign_grade(copy.sign_grade), execute_grade(copy.execute_grade)
{}

Form & Form::operator=(const Form & op)
{
	if (&op == this)
		return *this;
	return *this;
}

const std::string & Form::getName() const
{
	return (this->name);
}

bool Form::getSign() const
{
	return (this->sign);
}

int	Form::getSignGrade() const
{
	return (this->sign_grade);
}

int	Form::getExecuteGrade() const
{
	return (this->execute_grade);
}

void Form::beSigned(const Bureaucrat& bur)
{
	if (bur.getGrade() > this->sign_grade)
		throw Form::GradeTooLowException();
	this->sign = true;

}

std::ostream& operator<<(std::ostream& out, const Form & B)
{
	out << B.getName() << ", Form sign " << B.getSign() << ", Form sign_grade " << B.getSignGrade() << ", Form execute_sign " << B.getExecuteGrade() << '.';
	return out;
}
