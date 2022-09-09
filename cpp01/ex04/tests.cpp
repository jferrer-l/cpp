/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jferrer- <jferrer-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 21:17:38 by jferrer-          #+#    #+#             */
/*   Updated: 2022/09/09 19:02:58 by jferrer-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

int	main()
{
	std::string str1 = "a";
	std::string str2 = "replaced";
	std::string filename = "new.txt";
	std::string commandline = "./replace " + filename + ' ' + str1 + ' ' + str2;
	std::string text;

	std::cout << "str1 = " << str1 << std::endl << "str2 = " << str2 << std::endl;
	std::cout << filename << " content is: " << reader(filename) << std::endl;
	system(commandline.c_str());
	std::cout << filename << ".replace content is: " << reader(filename + ".replace") << std::endl;
	std::cout << "\n\n\n\n";

	str1 = "string bigger than the file contentent aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
	str2 = "replaced";
	commandline = "./replace " + filename + ' ' + str1 + ' ' + str2;
	std::cout << "str1 = " << str1 << std::endl << "str2 = " << str2 << std::endl;
	std::cout << filename << " content is: " << reader(filename) << std::endl;
	system(commandline.c_str());
	std::cout << filename << ".replace content is: " << reader(filename + ".replace") << std::endl;
}
