/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jferrer- <jferrer-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 02:51:49 by jferrer-          #+#    #+#             */
/*   Updated: 2022/08/17 21:08:08 by jferrer-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_H
# define HUMANB_H

#include "Weapon.hpp"
#include <string>

class HumanB
{
private:
	Weapon		*weapon;
	std::string	name;

public:
	HumanB();
	~HumanB();

	HumanB(std::string name);

	void setWeapon(Weapon &weapon);
	void	attack();
};

#endif
