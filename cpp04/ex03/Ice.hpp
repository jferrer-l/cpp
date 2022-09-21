/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jferrer- <jferrer-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 21:46:15 by jferrer-          #+#    #+#             */
/*   Updated: 2022/09/21 01:43:09 by jferrer-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include <iostream>
#include "AMateria.hpp"

class Ice: public AMateria
{
	private:

	public:
	virtual ~Ice();
	Ice();
	Ice(const Ice&);
	Ice& operator=(const Ice&);

	AMateria* clone() const;
	void use(ICharacter& target);
};

#endif
