/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jferrer- <jferrer-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 19:08:51 by jferrer-          #+#    #+#             */
/*   Updated: 2022/10/05 18:03:19 by jferrer-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <sstream>
#include <string>
#include "Convert.hpp"

int main(int argc, char **argv)
{
	int i;

	if (argc != 2)
	{
		std::cout << "Invalid number of arguments\n";
		return (-1);
	}
	std::string str = argv[1];
	try
	{
		Convert conv(str);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	(void)i;
	(void)argc;
	(void)argv;
	return (0);
}
