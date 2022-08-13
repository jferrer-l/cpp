/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jferrer- <jferrer-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 00:19:26 by jferrer-          #+#    #+#             */
/*   Updated: 2022/08/14 01:10:07 by jferrer-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

int main()
{
	std::string name = "Paco";
	Zombie *oneZombie = newZombie(name);
	oneZombie->announce();
	delete(oneZombie);
	randomChump("Manolo");
	return (0);
}
