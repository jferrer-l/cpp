/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jferrer- <jferrer-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 18:33:53 by jferrer-          #+#    #+#             */
/*   Updated: 2022/09/19 18:26:24 by jferrer-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal
{
protected:
	std::string	type;

public:
	virtual ~Animal();
	Animal();
	Animal(const Animal& copy);
	Animal& operator=(const Animal& op);

	virtual void makeSound() const;
	std::string getType() const;
};

#endif
