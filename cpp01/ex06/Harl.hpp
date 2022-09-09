/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jferrer- <jferrer-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 19:14:21 by jferrer-          #+#    #+#             */
/*   Updated: 2022/09/09 19:24:55 by jferrer-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

#include <string>
#include <iostream>

class Harl
{
private:
	std::string	name;

	void	debug(void);
	void	info(void);
	void	warning(void);
	void	error(void);

public:
	~Harl();

	Harl();

	void	complain(std::string level);
};

#endif
