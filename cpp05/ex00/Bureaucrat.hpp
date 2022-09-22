/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jferrer- <jferrer-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 03:27:57 by jferrer-          #+#    #+#             */
/*   Updated: 2022/09/22 06:12:38 by jferrer-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <stdexcept>

class Bureaucrat
{
	private:
	const std::string name;
	int grade;

	public:
	~Bureaucrat();
	Bureaucrat(std::string name, int grade);
	Bureaucrat(const Bureaucrat &);
	Bureaucrat &operator=(const Bureaucrat &);

	const std::string	& getName() const;
	int			getGrade() const;

	void		increaseGrade();
	void		decreaseGrade();

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

std::ostream& operator<<(std::ostream&, Bureaucrat const&);

#endif
