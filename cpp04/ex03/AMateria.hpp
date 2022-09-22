/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jferrer- <jferrer-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 00:43:01 by jferrer-          #+#    #+#             */
/*   Updated: 2022/09/22 02:40:17 by jferrer-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
#include <string>
#include "ICharacter.hpp"

class AMateria
{
	private:
		std::string type;

	public:
		AMateria(const AMateria&);
		AMateria& operator=(const AMateria&);
		AMateria(std::string const &);
		virtual ~AMateria();

		std::string const & getType() const;

		virtual	AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};

#endif
