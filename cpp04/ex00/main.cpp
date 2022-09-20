/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jferrer- <jferrer-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 18:34:07 by jferrer-          #+#    #+#             */
/*   Updated: 2022/09/19 19:42:26 by jferrer-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	{
		const Animal* meta = new Animal();
		const Animal* j = new Dog();
		const Animal* i = new Cat();
		const WrongAnimal* wronganimal = new WrongAnimal();
		const WrongAnimal* wrongcat = new WrongCat();
		std::cout << j->getType() << " " << std::endl;
		std::cout << i->getType() << " " << std::endl;
		i->makeSound(); //will output the cat sound!
		j->makeSound();
		meta->makeSound();
		wrongcat->makeSound();
		wronganimal->makeSound();
		delete(meta);
		delete(j);
		delete(i);
		delete(wronganimal);
		delete(wrongcat);
	}
	std::cout << std::endl;
	{
		const Dog* j = new Dog();
		const Cat* i = new Cat();
		const WrongCat* wrongcat = new WrongCat();
		//const Dog* meta = new Animal(); //You can't do this because a Dog object isn't necessarily an Animal
		Cat* cat;
		cat = new Cat();
		std::cout << j->getType() << " " << std::endl;
		std::cout << i->getType() << " " << std::endl;
		i->makeSound();
		j->makeSound();
		cat->makeSound();
		wrongcat->makeSound(); //it works properly because wrongcat was defined as WrongCat type and not an Animal type
		delete(j);
		delete(i);
		delete(wrongcat);
		delete(cat);
	}
	return 0;
}
