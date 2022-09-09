/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jferrer- <jferrer-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 19:14:27 by jferrer-          #+#    #+#             */
/*   Updated: 2022/09/09 21:03:50 by jferrer-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(){}

Harl::~Harl(){}

void	Harl::complain(std::string level)
{
	int		index = 0;
	Harl	x;
	void	(Harl::*HarlMemFn[])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string names[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	while (index < 4)
	{
		if (level == names[index])
		{
			((x).*(HarlMemFn[index]))();
			break ;
		}
		index++;
	}
	if (index == 4)
		std::cout << "Wrong command" << std::endl;
}

void	Harl::debug()
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void	Harl::info()
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void	Harl::warning()
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void	Harl::error()
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}
