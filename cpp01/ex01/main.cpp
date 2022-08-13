/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jferrer- <jferrer-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 00:19:26 by jferrer-          #+#    #+#             */
/*   Updated: 2022/08/14 01:30:29 by jferrer-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
	std::string str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string &stringREF = str;

	std::cout << "Memory address of str is " << &str << std::endl;
	std::cout << "Memory address held by stringPTR is " << stringPTR << std::endl;
	std::cout << "Memory address held by stringREF is " << &stringREF << std::endl;

	std::cout << "Value of str is " << str << std::endl;
	std::cout << "Value pointed by stringPTR is " << *stringPTR << std::endl;
	std::cout << "Value pointed by stringREF is " << stringREF << std::endl;

	return (0);
}
