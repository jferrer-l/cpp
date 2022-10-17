/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jferrer- <jferrer-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 06:33:59 by jferrer-          #+#    #+#             */
/*   Updated: 2022/09/22 07:20:04 by jferrer-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include <stdexcept>
#include "Bureaucrat.hpp"

AForm::~AForm(){}

AForm::AForm(const std::string name, const int sign_grade, const int execute_grade): name(name), sign(false), sign_grade(sign_grade), execute_grade(execute_grade)
{
	if (sign_grade < 1 || execute_grade < 1)
		throw AForm::GradeTooHighException();
	else if (sign_grade > 150 || execute_grade > 150)
		throw AForm::GradeTooLowException();
}

AForm::AForm(const AForm & copy): name(copy.name), sign(copy.sign), sign_grade(copy.sign_grade), execute_grade(copy.execute_grade)
{}

AForm & AForm::operator=(const AForm & op)
{
	if (&op == this)
		return *this;
	return *this;
}

const std::string & AForm::getName() const
{
	return (this->name);
}

bool AForm::getSign() const
{
	return (this->sign);
}

int	AForm::getSignGrade() const
{
	return (this->sign_grade);
}

int	AForm::getExecuteGrade() const
{
	return (this->execute_grade);
}

void AForm::beSigned(const Bureaucrat& bur)
{
	if (bur.getGrade() > this->sign_grade)
		throw AForm::GradeTooLowException();
	this->sign = true;
}

void AForm::execute(const Bureaucrat& bur) const
{
	if (this->sign == false)
		throw AForm::AFormNotSignedException();
	if (bur.getGrade() > this->execute_grade)
		throw AForm::GradeTooLowException();
	executor(bur);
}

std::ostream& operator<<(std::ostream& out, const AForm & B)
{
	out << B.getName() << ", AForm sign " << B.getSign() << ", AForm sign_grade " << B.getSignGrade() << ", AForm execute_sign " << B.getExecuteGrade() << '.';
	return out;
}

bool	AForm::canBeExecuted(Bureaucrat const & executor) const
{
	if(!this->sign)
	{
		throw AForm::AFormNotSignedException();
		return(false);
	}
	if (this->execute_grade >= executor.getGrade())
		return(true);
	else
	{
		throw AForm::GradeTooLowException();
		return(false);
	}
}
