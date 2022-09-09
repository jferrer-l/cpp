/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jferrer- <jferrer-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 19:14:27 by jferrer-          #+#    #+#             */
/*   Updated: 2022/09/09 21:41:02 by jferrer-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(){}

Harl::~Harl(){}

void	Harl::complain(std::string level)
{
	int		index = -1;
	Harl	x;
	void	(Harl::*HarlMemFn[])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	enum	names{DEBUG, INFO, WARNING, ERROR};
	std::string	strnames[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	while (++index < 4)
		if (level == strnames[index])
			break ;
	switch (index)
	{
	case DEBUG:
		((x).*(HarlMemFn[0]))();

	case INFO:
		((x).*(HarlMemFn[1]))();

	case WARNING:
		((x).*(HarlMemFn[2]))();

	case ERROR:
		((x).*(HarlMemFn[3]))();
		break;

	default:
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
		break;
	}
}

void	Harl::debug()
{
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!\n" << std::endl;
}

void	Harl::info()
{
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!\n" << std::endl;
}

void	Harl::warning()
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month.\n" << std::endl;
}

void	Harl::error()
{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now.\n" << std::endl;
}
