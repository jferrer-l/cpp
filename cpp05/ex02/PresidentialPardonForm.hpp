/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jferrer- <jferrer-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 07:53:19 by jferrer-          #+#    #+#             */
/*   Updated: 2022/09/22 09:27:34 by jferrer-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include <iostream>
#include <stdexcept>
#include <string>
#include "Bureaucrat.hpp"
#include "AForm.hpp"

class PresidentialPardonForm: public AForm
{
	private:
	std::string	target;

	public:
	virtual ~PresidentialPardonForm();
	PresidentialPardonForm(const std::string name);
	PresidentialPardonForm(const PresidentialPardonForm &);
	PresidentialPardonForm &operator=(const PresidentialPardonForm &);

	const std::string & getName() const
	{
		std::string* temp = new std::string("");
		return *temp;
	}

	bool		getSign() const
	{
		return true;
	}

	int			getSignGrade() const
	{
		return 25;
	}

	int			getExecuteGrade() const
	{
		return 5;
	}

	// void		beSigned(Bureaucrat const & bur);

	// class GradeTooHighException: public std::exception
	// {
	// 	virtual const char* what() const throw()
	// 	{
	// 		return ("Expected a grade equal or lower than 1");
	// 	}
	// };

	// class GradeTooLowException: public std::exception
	// {
	// 	virtual const char* what() const throw()
	// 	{
	// 		return ("Expected a grade equal or higher than 150");
	// 	}
	// };
};

// std::ostream& operator<<(std::ostream&, PresidentialPardonForm const&);

#endif
