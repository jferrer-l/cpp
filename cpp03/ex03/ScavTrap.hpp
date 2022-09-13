/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jferrer- <jferrer-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 19:49:26 by jferrer-          #+#    #+#             */
/*   Updated: 2022/09/13 22:26:58 by jferrer-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap
{
public:
	~ScavTrap();
	ScavTrap();
	ScavTrap(std::string name);
	ScavTrap(const ScavTrap& copy);
	ScavTrap& operator=(const ScavTrap& clapclap);

	void	guardGate();
	void	attack(const std::string& target);
};

#endif
