/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jferrer- <jferrer-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 17:33:41 by jferrer-          #+#    #+#             */
/*   Updated: 2022/09/12 21:24:47 by jferrer-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
protected:
	std::string	name;
	int			hitppoints;
	int			energypoints;
	int			attackdamage;
	ClapTrap();

public:
	~ClapTrap();

	ClapTrap(std::string name);
	ClapTrap(const ClapTrap& copy);
	ClapTrap& operator=(const ClapTrap& clapclap);

	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

	std::string	getName() const;
	int			getHitpoints() const;
	int			getEnergypoints() const;
	int			getAttackdamage() const;
};

#endif
