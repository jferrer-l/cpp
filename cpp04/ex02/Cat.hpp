/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jferrer- <jferrer-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 18:33:59 by jferrer-          #+#    #+#             */
/*   Updated: 2022/09/19 23:13:32 by jferrer-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include <iostream>
#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat: public AAnimal
{
private:
	Brain* brain;

public:
	~Cat();
	Cat();
	Cat(const Cat& copy);
	Cat& operator= (const Cat& op);

	virtual void makeSound() const;
	Brain& getBrain();
};

#endif
