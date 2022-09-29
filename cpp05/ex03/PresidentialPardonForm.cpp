/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jferrer- <jferrer-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 07:53:17 by jferrer-          #+#    #+#             */
/*   Updated: 2022/09/22 11:53:47 by jferrer-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include <stdexcept>
#include "Bureaucrat.hpp"
#include "AForm.hpp"

PresidentialPardonForm::~PresidentialPardonForm(){}

PresidentialPardonForm::PresidentialPardonForm(const std::string target): AForm("presidential", 25, 5), target(target)
{}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm & copy): AForm(copy), target(copy.target)
{}

PresidentialPardonForm & PresidentialPardonForm::operator=(const PresidentialPardonForm & op)
{
	if (&op == this)
		return *this;
	this->target = op.target;
	return *this;
}

void PresidentialPardonForm::executor() const
{
	std::cout << this->target << " has been pardoned by Zaphod Beeblebrox\n";
}

// const std::string & PresidentialPardonForm::getName() const
// {
// 	std::string* temp = new std::string("no va");
// 	return (*temp);
// }

// bool PresidentialPardonForm::getSign() const
// {
// 	return true;
// }

// int PresidentialPardonForm::getSignGrade() const
// {
// 	return 25;
// }

// int PresidentialPardonForm::getExecuteGrade() const
// {
// 	return 5;
// }

// const std::string & PresidentialPardonForm::getName() const
// {
// 	return (this->name);
// }

// bool PresidentialPardonForm::getSign() const
// {
// 	return (this->sign);
// }

// int	PresidentialPardonForm::getSignGrade() const
// {
// 	return (this->sign_grade);
// }

// int	PresidentialPardonForm::getExecuteGrade() const
// {
// 	return (this->execute_grade);
// }

// void PresidentialPardonForm::beSigned(const Bureaucrat& bur)
// {
// 	bur.signForm(*this);
// 	if (bur.getGrade() > this->getSignGrade())
// 		throw PresidentialPardonForm::GradeTooLowException();
// 	this->sign = true;

// }

// std::ostream& operator<<(std::ostream& out, const PresidentialPardonForm & B)
// {
// 	out << B.getName() << ", PresidentialPardonForm sign " << B.getSign() << ", PresidentialPardonForm sign_grade " << B.getSignGrade() << ", PresidentialPardonForm execute_sign " << B.getExecuteGrade() << '.';
// 	return out;
// }

// void	beSigned(Bureaucrat const & bur)
// {
// 	(void)bur;
// }

// void	execute(Bureaucrat const & executor)
// {
// 	(void)executor;
// }
