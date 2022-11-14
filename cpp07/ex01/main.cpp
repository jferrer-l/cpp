/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jferrer- <jferrer-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 18:54:42 by jferrer-          #+#    #+#             */
/*   Updated: 2022/11/14 19:38:26 by jferrer-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"



// int main()
// {
// 	int length = 5;
// 	int a[5] = {48, 49, 50, 4, 5};
// 	::iter(a, length, &increase);
// 	for (int i = 0; i < length; i++)
// 		std::cout << a[i] << std::endl;
// 	return (0);
// }

int	main( void )
{
	std::string	strTable[3];
	strTable[0] = "Hi how are you?";
	strTable[1] = "Fine, and you dear sir?";
	strTable[2] = "Very fine indeed!";
	::iter(strTable, 3, &increase);
	int intR[5] = { 0, 1, 2, 3, 4 };
	iter(intR, 5, &increase); std::cout << std::endl;
	float floatR[5] = { 0.0f, 1.1f, 2.2f, 3.3f, 4.4f };
	iter(floatR, 5, &increase); std::cout << std::endl;
	double doubleR[5] = { 0.00, 1.11, 2.22, 3.33, 4.44 };
	iter(doubleR, 5, &increase); std::cout << std::endl;
	bool boolR[2] = { false, true };
	iter(boolR, 2, &increase); std::cout << std::endl;
	std::string stringR[5] = { "phrase 1", "phrase 2", "templates", "are", "fun" };
	iter(stringR, 5, &increase); std::cout << std::endl;
	iter(stringR, 2, &increase); std::cout << std::endl;
	iter(stringR, 0, &increase); std::cout << std::endl;
}
