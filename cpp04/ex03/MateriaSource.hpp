/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jferrer- <jferrer-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 04:54:58 by jferrer-          #+#    #+#             */
/*   Updated: 2022/09/22 02:53:55 by jferrer-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include <iostream>
#include "AMateria.hpp"
#include "IMateriaSource.hpp"

class MateriaSource: public IMateriaSource
{
	private:
	AMateria*	slots[4];

	public:
	MateriaSource();
	virtual ~MateriaSource();
	MateriaSource(const MateriaSource&);
	MateriaSource &operator=(const MateriaSource&);

	void learnMateria(AMateria*);
	AMateria* createMateria(std::string const & type);
};

#endif
