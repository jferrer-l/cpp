/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jferrer- <jferrer-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 18:33:53 by jferrer-          #+#    #+#             */
/*   Updated: 2022/09/19 18:26:24 by jferrer-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
#define AANIMAL_HPP

#include <iostream>

class AAnimal
{
protected:
	std::string	type;

	AAnimal();
	AAnimal(const AAnimal& copy);
	AAnimal& operator=(const AAnimal& op);
public:
	virtual ~AAnimal() = 0;
	virtual void makeSound() const = 0;
	//virtual std::string getType() const = 0;
};

#endif
