/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jferrer- <jferrer-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 19:56:27 by jferrer-          #+#    #+#             */
/*   Updated: 2022/10/09 21:55:15 by jferrer-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"
#include <sstream>
#include <iomanip>
#include <sstream>

static bool is_printable(long);
static bool is_number(char);
static bool is_number(const std::string &str);
static bool equals(const std::string &, const std::string &);

Convert::~Convert(){}

Convert::Convert(const std::string & str)
{
	parse(str);
}

Convert::Convert(const Convert &copy): c_value(copy.c_value), i_value(copy.i_value), f_value(copy.f_value), d_value(copy.d_value)
{}

Convert & Convert::operator=(const Convert &op)
{
	if (&op == this)
		return *this;
	this->c_value = op.c_value;
	this->i_value = op.i_value;
	this->f_value = op.f_value;
	this->d_value = op.d_value;
	return *this;
}

void	Convert::parse(const std::string & str)
{
	bool f = false;
	bool point = false;
	bool is_char = false;

	if (!str[0])
		throw(InvalidInput());
	for (int i = 0; str[i]; i++)
	{
		if (equals(str, "-inf") || equals(str, "+inf") || equals(str, "nan"))
		{
			point = true;
			break ;
		}
		if (equals(str, "-inff") || equals(str, "+inff") || equals(str, "nanf"))
		{
			f = true;
			point = true;
			break ;
		}
		if (!is_number(str[0]) && str[0] != '\'' && str[0] != '-')
			throw(InvalidInput());
		if (str[0] && str[1] && str[2] && str[0] == '\'' && str[2] == '\'' && is_printable(str[1]) && !str[3])
		{
			is_char = true;
			break ;
		}
		if ((str[i] == '-' && i != 0) || (str[i] == '-' && !str[i + 1]) || (str[i] == '.' && !str[i + 1]))
			throw(InvalidInput());
		if (str[i] == '-' && str[i + 1] && !is_number(str[i + 1]))
			throw(InvalidInput());
		if (str[i] == '.' && point == false && i > 0)
			point = true;
		else if (str[i] == '.')
			throw(InvalidInput());
		else if (str[i] == 'f' && f == false && point == true && i > 2 && str[i - 1] != '.')
			f = true;
		else if (str[i] == 'f')
			throw(InvalidInput());
		else if (i > 0 && !is_number(str[i]))
			throw(InvalidInput());
	}
	if (is_number(str) || (str[0] && str[0] == '-' && is_number(&(str[1]))))
		from_int(str);
	else if (is_char)
		from_char(str);
	else if (f)
		from_float(str);
	else if (point)
		from_double(str);
}

void	Convert::from_char(const std::string & str)
{
	this->c_value = str[1];
	if (is_printable(this->c_value))
		std::cout << "char: '" << this->c_value << "'" << std::endl;
	else
		std::cout << "char: Non displayable\n";
	std::cout << "int: " << (i_value = static_cast<int>(str[1])) << std::endl;
	std::cout << "float: " << (f_value = static_cast<float>(str[1])) << ".0f" << std::endl;
	std::cout << "double: " << (d_value = static_cast<double>(str[1])) << ".0" << std::endl;
}

void	Convert::from_int(const std::string & str)
{
	long temp;
	bool valid = true;
	std::istringstream stream(str);
	stream >> this->i_value;
	std::istringstream tempstream(str);
	tempstream >> temp;

	if (is_printable(this->i_value))
		std::cout << "char: '" << (c_value = static_cast<char>(this->i_value)) << "'" << std::endl;
	else if (this->i_value == 127 || (this->i_value <= 31 && this->i_value >= 0))
		std::cout << "char: Non displayable\n";
	else
		std::cout << "char: impossible\n";
	if (temp > INT_MAX || temp < INT_MIN)
	{
		valid = false;
		std::cout << "int: impossible" << std::endl;
	}
	else
		std::cout << "int: " << this->i_value << std::endl;
	if (!valid)
		std::cout << "float: nanf" << std::endl;
	else
		std::cout << "float: " << (f_value = static_cast<float>(this->i_value)) << ".0f" << std::endl;
	if (!valid)
		std::cout << "double: nan" << std::endl;
	else
		std::cout << "double: " << (d_value = static_cast<double>(this->i_value)) << ".0" << std::endl;
}

void	Convert::from_float(const std::string & str)
{
	std::string temp = str;

	if (str == "nanf")
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: nanf" << std::endl;
		std::cout << "double: nan" << std::endl;
		return ;
	}
	else if (str == "+inff")
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: inff" << std::endl;
		std::cout << "double: inf" << std::endl;
		return ;
	}
	else if (str == "-inff")
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: -inff" << std::endl;
		std::cout << "double: -inf" << std::endl;
		return ;
	}
	for (int i = 0; temp[i]; i++)
		if (!temp[i + 1])
			temp[i] = '\0';
	std::istringstream stream(temp);
	stream >> this->f_value;
	if (is_printable(this->f_value))
		std::cout << "char: '" << (c_value = static_cast<char>(this->f_value)) << "'" << std::endl;
	else if (this->f_value == 127 || (this->f_value <= 31 && this->f_value >= 0))
		std::cout << "char: Non displayable\n";
	else
		std::cout << "char: impossible\n";
	//std::cout << std::setprecision(20) << std::endl;
	if (f_value > INT_MAX || f_value < INT_MIN)
		std::cout << "int: impossible" << std::endl;
	else if (f_value == INT_MAX)
		std::cout << "int: " << INT_MAX << std::endl;
	else
		std::cout << "int: " << (i_value = static_cast<int>(this->f_value)) << std::endl;
	if (this->f_value == INFINITY)
	{
		std::cout << "float: inff" << std::endl;
		std::cout << "double: inf" << std::endl;
		return ;
	}
	else if (this->f_value == -INFINITY)
	{
		std::cout << "float: -inff" << std::endl;
		std::cout << "double: -inf" << std::endl;
		return ;
	}
	std::ostringstream ss;
	ss << this->f_value;
	std::string s(ss.str());
	for (int i = 0; s[i]; i++)
	{
		if (s[i] == '.' || s[i] == 'e')
		{
			std::cout << "float: " << this->f_value << "f" << std::endl;
			break ;
		}
		else if (!s[i + 1])
			std::cout << "float: " << this->f_value << ".0f" << std::endl;
	}
	for (int i = 0; s[i]; i++)
	{
		if (s[i] == '.' || s[i] == 'e')
		{
			std::cout << "double: " << static_cast<double>(this->f_value) << std::endl;
			break ;
		}
		else if (!s[i + 1])
			std::cout << "double: " << static_cast<double>(this->f_value) << ".0" << std::endl;
	}
}

void	Convert::from_double(const std::string & str)
{
	std::string temp = str;

	if (str == "nan")
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: nanf" << std::endl;
		std::cout << "double: nan" << std::endl;
		return ;
	}
	else if (str == "+inf")
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: inff" << std::endl;
		std::cout << "double: inf" << std::endl;
		return ;
	}
	else if (str == "-inf")
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: -inff" << std::endl;
		std::cout << "double: -inf" << std::endl;
		return ;
	}
	// for (int i = 0; temp[i]; i++)
	// 	if (!temp[i + 1])
	// 		temp[i] = '\0';
	std::istringstream stream(temp);
	stream >> this->d_value;
	if (is_printable(this->d_value))
		std::cout << "char: '" << (c_value = static_cast<char>(this->d_value)) << "'" << std::endl;
	else if (this->d_value == 127 || (this->d_value <= 31 && this->d_value >= 0))
		std::cout << "char: Non displayable\n";
	else
		std::cout << "char: impossible\n";
	if (d_value > INT_MAX || d_value < INT_MIN)
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: " << (i_value = static_cast<int>(this->d_value)) << std::endl;
	if (this->d_value == INFINITY)
	{
		std::cout << "float: inff" << std::endl;
		std::cout << "double: inf" << std::endl;
		return ;
	}
	else if (this->d_value == -INFINITY)
	{
		std::cout << "float: -inff" << std::endl;
		std::cout << "double: -inf" << std::endl;
		return ;
	}
	std::ostringstream ss;
	ss << this->d_value;
	std::string s(ss.str());
	std::ostringstream ss2;
	ss2 << static_cast<float>(this->d_value);
	std::string s2(ss2.str());
	if (static_cast<float>(this->d_value) == INFINITY || static_cast<float>(this->d_value) == -INFINITY)
		std::cout << "float: " << static_cast<float>(this->d_value) << "f" << std::endl;
	else
	{
		for (int i = 0; s2[i]; i++)
		{
			if (s2[i] == '.' || s2[i] == 'e')
			{
				std::cout << "float: " << static_cast<float>(this->d_value) << "f" << std::endl;
				break ;
			}
			else if (!s2[i + 1])
				std::cout << "float: " << static_cast<float>(this->d_value) << ".0f" << std::endl;
		}
	}
	for (int i = 0; s[i]; i++)
	{
		if (s[i] == '.' || s[i] == 'e')
		{
			std::cout << "double: " << this->d_value << std::endl;
			break ;
		}
		else if (!s[i + 1])
			std::cout << "double: " << this->d_value << ".0" << std::endl;
	}
}

static bool is_printable(long c)
{
	if (c >= 32 && c <= 126)
		return true;
	return false;
}

static bool is_number(char c)
{
	if (c >= '0' && c <= '9')
		return true;
	return false;
}

static bool is_number(const std::string &str)
{
	for (int i = 0; str[i]; i++)
		if (str[i] < '0' || str[i] > '9')
			return false;
	return true;
}

static bool equals(const std::string &s1, const std::string &s2)
{
	for (int i = 0; s1[i] || s2[i]; i++)
		if (s1[i] != s2[i])
			return (false);
	return (true);
}
