/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jferrer- <jferrer-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 18:34:04 by jferrer-          #+#    #+#             */
/*   Updated: 2022/09/19 22:46:55 by jferrer-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Dog: public Animal
{
private:
	Brain* brain;

public:
	~Dog();
	Dog();
	Dog(const Dog& copy);
	Dog& operator= (const Dog& op);

	virtual void makeSound() const;
	Brain& getBrain();
};

#endif
