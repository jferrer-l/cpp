/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jferrer- <jferrer-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 02:51:38 by jferrer-          #+#    #+#             */
/*   Updated: 2022/08/17 20:16:23 by jferrer-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_H
# define HUMANA_H

#include "Weapon.hpp"
#include <string>

class HumanA
{
private:
	std::string	name;
	Weapon		&weapon;

public:
	~HumanA();

	HumanA(std::string name, Weapon &weapon);

	void	attack();
};

#endif
