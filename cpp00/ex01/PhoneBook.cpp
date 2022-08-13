/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jferrer- <jferrer-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 16:51:50 by jferrer-          #+#    #+#             */
/*   Updated: 2022/08/13 20:59:58 by jferrer-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
	size = 0;
	return;
}

PhoneBook::~PhoneBook(void){ return; }

void PhoneBook::addContact(Contact newcontact)
{
	int	temp;
	if (size < 8)
	{
		list[size] = newcontact;
		list[size].setIndex(size + 1);
		size++;
	}
	else
	{

		temp = list[0].getIndex();
		for (int i = 0; i < 7; i++)
			list[i] = list[i + 1];
		newcontact.setIndex(list[0].getIndex());
		list[7] = newcontact;
		list[7].setIndex(temp);
	}
}

Contact *PhoneBook::getList(void){ return (list); }

int	PhoneBook::getSize(void){ return (size); }
