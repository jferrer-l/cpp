/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jferrer- <jferrer-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 19:56:25 by jferrer-          #+#    #+#             */
/*   Updated: 2022/10/05 18:04:56 by jferrer-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_HPP
#define CONVERT_HPP

#include <iostream>
#include <string>
#include <stdexcept>

class Convert
{
	private:
	char c_value;
	int i_value;
	float f_value;
	double d_value;

	protected:
	void	parse(const std::string&);
	void	from_char(const std::string&);
	void	from_int(const std::string&);
	void	from_float(const std::string&);
	void	from_double(const std::string&);

	public:
	~Convert();
	Convert(const std::string &);
	Convert(const Convert &);
	Convert &operator=(const Convert &);

	class InvalidInput: public std::exception
	{
		virtual const char* what() const throw()
		{
			return ("Invalid Input");
		}
	};
};

//std::ostream& operator<<(std::ostream&, Convert const&);

#endif
