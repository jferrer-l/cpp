/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jferrer- <jferrer-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 18:34:07 by jferrer-          #+#    #+#             */
/*   Updated: 2022/09/19 22:55:35 by jferrer-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	{
		Animal* array[8];
		Cat* temp = new Cat();

		Cat* newcat;
		newcat = temp;
		std::cout << "Temp Brain address is: " << &temp->getBrain() << " and newcat Brain address is: " << &newcat->getBrain() << std::endl;
		for (unsigned int i = 0;i < sizeof(array) / 16; i++)
			array[i] = new Dog();
		for (unsigned int i = sizeof(array) / 16;i < sizeof(array) / 8; i++)
			array[i] = new Cat();
		for (unsigned int i = 0; i < sizeof(array) / 8; i++)
			delete(array[i]);
		delete(newcat);
		//system("leaks exec");
	}
	return 0;
}
