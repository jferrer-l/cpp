/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jferrer- <jferrer-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 01:21:08 by jferrer-          #+#    #+#             */
/*   Updated: 2022/08/17 02:49:14 by jferrer-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	int N = 5;
	std::string name = "Paco";
	delete[](zombieHorde(N, name));
	//system("leaks allocate_zombies");
	return (0);
}
