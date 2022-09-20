/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jferrer- <jferrer-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 18:34:07 by jferrer-          #+#    #+#             */
/*   Updated: 2022/09/20 00:40:44 by jferrer-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	{
		AAnimal* pointer;// = new AAnimal();
		std::cout << std::endl;

		Cat* temp = new Cat();

		std::cout << std::endl;
		pointer = new Dog();
		std::cout << std::endl;

		Cat* newcat;
		newcat = temp;
		delete(newcat);
		delete(pointer);
		//system("leaks exec");
	}
	return 0;
}
