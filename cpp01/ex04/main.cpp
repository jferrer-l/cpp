/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jferrer- <jferrer-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 21:18:36 by jferrer-          #+#    #+#             */
/*   Updated: 2022/09/09 18:57:59 by jferrer-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

static int	handleInput(int argc, char **argv);
static void	writer(std::string content, std::string oldstr, std::string newstr, std::string filename);

int main(int argc, char **argv)
{
	std::string text;

	handleInput(argc, argv);
	std::string filename = argv[1];
	text = reader(filename);
	writer(text, argv[2], argv[3], argv[1]);
}

static int	handleInput(int argc, char **argv)
{
	if (argc < 4)
	{
		std::cout << "Wrong number of arguments" << std::endl;
		exit(1);
	}
	if (!argv[2][0] || !argv[3][0])
	{
		std::cout << "Invalid strings" << std::endl;
		exit(1);
	}
	return (1);
}

static void	writer(std::string content, std::string oldstr, std::string newstr, std::string filename)
{
	std::fstream writefile;
	std::string::iterator i;
	std::size_t found;
	std::size_t index;

	writefile.open(filename + ".replace", std::fstream::out);
	if (!writefile.is_open())
	{
		std::cout << "Failed to open the file" << std::endl;
		exit(1);
	}
	if (content.length() < oldstr.length())
	{
		writefile << content;
		return ;
	}
	found = content.find(oldstr);
	while (found != std::string::npos)
	{
		index = found + newstr.length();
		content.erase(found, oldstr.length());
		content.insert(found, newstr);
		found = content.find(oldstr, index);
	}
	writefile << content;
}
