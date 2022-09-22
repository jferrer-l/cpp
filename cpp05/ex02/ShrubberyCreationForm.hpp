/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jferrer- <jferrer-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 07:53:41 by jferrer-          #+#    #+#             */
/*   Updated: 2022/09/22 08:47:14 by jferrer-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include <iostream>
#include <stdexcept>
#include <string>
#include "Bureaucrat.hpp"
#include "AForm.hpp"

class ShrubberyCreationForm: public AForm
{
	private:

	public:
	virtual ~ShrubberyCreationForm();
	ShrubberyCreationForm(const std::string name, const int sign_grade, const int execute_grade);
	ShrubberyCreationForm(const ShrubberyCreationForm &);
	ShrubberyCreationForm &operator=(const ShrubberyCreationForm &);

	// const std::string & getName() const;
	// bool		getSign() const;
	// int			getSignGrade() const;
	// int			getExecuteGrade() const;

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

std::ostream& operator<<(std::ostream&, ShrubberyCreationForm const&);

#endif
