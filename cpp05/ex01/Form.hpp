/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jferrer- <jferrer-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 06:33:55 by jferrer-          #+#    #+#             */
/*   Updated: 2022/09/22 08:02:06 by jferrer-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <stdexcept>
#include <string>
#include "Bureaucrat.hpp"

class Form
{
	private:
	const std::string	name;
	bool				sign;
	const int			sign_grade;
	const int			execute_grade;

	public:
	virtual ~Form();
	Form(const std::string name, const int sign_grade, const int execute_grade);
	Form(const Form &);
	Form &operator=(const Form &);

	const std::string & getName() const;
	bool		getSign() const;
	int			getSignGrade() const;
	int			getExecuteGrade() const;

	void		beSigned(Bureaucrat const & bur);

	class GradeTooHighException: public std::exception
	{
		virtual const char* what() const throw()
		{
			return ("Expected a grade equal or lower than 1");
		}
	};

	class GradeTooLowException: public std::exception
	{
		virtual const char* what() const throw()
		{
			return ("Expected a grade equal or higher than 150");
		}
	};
};

std::ostream& operator<<(std::ostream&, Form const&);

#endif
