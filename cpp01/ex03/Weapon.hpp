/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jferrer- <jferrer-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 02:51:59 by jferrer-          #+#    #+#             */
/*   Updated: 2022/08/17 03:17:32 by jferrer-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
# define WEAPON_H

#include <string>

class Weapon
{
private:
	std::string type;

public:
	Weapon();
	~Weapon();

	Weapon(std::string weapon);

	std::string	&getType();
	void		setType(std::string newtype);
};

#endif
