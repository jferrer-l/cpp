/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jferrer- <jferrer-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 19:16:49 by jferrer-          #+#    #+#             */
/*   Updated: 2022/09/13 22:26:11 by jferrer-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class FragTrap: public ClapTrap
{
public:
	~FragTrap();
	FragTrap();
	FragTrap(std::string name);
	FragTrap(const FragTrap& copy);
	FragTrap& operator=(const FragTrap& clapclap);

	void	highFivesGuys(void);
	void	attack(const std::string& target);
};

#endif
