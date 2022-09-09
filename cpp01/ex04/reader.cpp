/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reader.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jferrer- <jferrer-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 18:57:28 by jferrer-          #+#    #+#             */
/*   Updated: 2022/09/09 18:57:43 by jferrer-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

std::string	reader(std::string filename)
{
	std::ifstream	readfile;
	std::string		str;
	std::string		buff;

	readfile.open(filename, std::fstream::in);
	if (!readfile.is_open())
	{
		std::cout << "Failed to open the file" << std::endl;
		exit(1);
	}
	while (!readfile.eof())
	{
		std::getline(readfile, buff);
		str += buff;
		if (!readfile.eof())
			str += '\n';
	}
	return str;
}
