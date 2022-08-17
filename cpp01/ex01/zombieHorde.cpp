/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jferrer- <jferrer-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 01:21:18 by jferrer-          #+#    #+#             */
/*   Updated: 2022/08/17 03:02:37 by jferrer-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
	Zombie *zombies = new Zombie[N];
	for(int i = 0; i < N; i++)
	{
		zombies[i].setName(name);
	}
	for(int i = 0; i < N; i++)
	{
		zombies[i].announce();
	}
	//delete[](zombies);
	return zombies;
}
