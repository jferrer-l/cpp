/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jferrer- <jferrer-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 06:33:55 by jferrer-          #+#    #+#             */
/*   Updated: 2022/09/22 07:48:30 by jferrer-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
#define AFORM_HPP

#include <iostream>
#include <stdexcept>
#include <string>
#include "Bureaucrat.hpp"

class AForm
{
	private:
	const std::string	name;
	bool				sign;
	const int			sign_grade;
	const int			execute_grade;

	public:
	virtual ~AForm() = 0;
	AForm(const std::string name, const int sign_grade, const int execute_grade);
	AForm(const AForm &);
	AForm &operator=(const AForm &);

	const std::string & getName() const;
	bool		getSign() const;
	int			getSignGrade() const;
	int			getExecuteGrade() const;

	void	beSigned(Bureaucrat const&);
	void	execute(Bureaucrat const&) const;

	virtual void	executor(Bureaucrat const &) const = 0;

	bool	canBeExecuted(Bureaucrat const &) const;

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

	class AFormNotSignedException: public std::exception
	{
		virtual const char* what() const throw()
		{
			return ("The AForm has to be signed before using execute");
		}
	};
};

std::ostream& operator<<(std::ostream&, AForm const&);

#endif
