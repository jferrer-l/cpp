/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jferrer- <jferrer-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 19:14:31 by jferrer-          #+#    #+#             */
/*   Updated: 2022/09/09 19:44:40 by jferrer-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

int	main(int argc, char **argv)
{
	Harl harl;

	if (argc != 2)
	{
		std::cout << "Invalid number of arguments" << std::endl;
		return (0);
	}
	harl.complain(argv[1]);
	return (0);
}
