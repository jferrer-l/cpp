/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jferrer- <jferrer-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 21:46:21 by jferrer-          #+#    #+#             */
/*   Updated: 2022/09/21 02:33:00 by jferrer-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include <iostream>
#include "AMateria.hpp"

class Cure: public AMateria
{
	private:

	public:
	virtual ~Cure();
	Cure();
	Cure(const Cure&);
	Cure& operator=(const Cure&);

	AMateria* clone() const;
	void use(ICharacter& target);
};

#endif
