/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jferrer- <jferrer-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 17:34:24 by jferrer-          #+#    #+#             */
/*   Updated: 2022/09/19 18:33:34 by jferrer-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal
{
protected:
	std::string	type;

public:
	virtual ~WrongAnimal();
	WrongAnimal();
	WrongAnimal(const WrongAnimal& copy);
	WrongAnimal& operator= (const WrongAnimal& op);

	void makeSound() const;
	std::string getType() const;
};

#endif
