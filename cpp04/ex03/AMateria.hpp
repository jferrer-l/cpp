/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jferrer- <jferrer-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 00:43:01 by jferrer-          #+#    #+#             */
/*   Updated: 2022/09/21 05:23:38 by jferrer-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
#include "ICharacter.hpp"

class AMateria
{
	protected:
		std::string type;

	public:
		AMateria(const AMateria&);
		AMateria& operator=(const AMateria&);
		AMateria(std::string const &);
		virtual ~AMateria();

		std::string const & getType() const;

		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};

#endif
