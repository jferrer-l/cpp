/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jferrer- <jferrer-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 00:19:41 by jferrer-          #+#    #+#             */
/*   Updated: 2022/08/17 02:30:45 by jferrer-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H
#include <string>

class Zombie {
private:
	std::string	name;

public:
	Zombie(std::string Zombie);
	~Zombie(void);
	void	announce(void);

	Zombie(void);
};

Zombie	*newZombie(std::string name);
void	randomChump(std::string name);

#endif
