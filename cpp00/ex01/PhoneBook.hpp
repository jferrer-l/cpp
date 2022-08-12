/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jferrer- <jferrer-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 16:06:44 by jferrer-          #+#    #+#             */
/*   Updated: 2022/08/11 19:39:49 by jferrer-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include "Contact.hpp"

class PhoneBook {
private:
	Contact list[8];
	int		size;
public:
	PhoneBook(void);
	~PhoneBook(void);
	void	addContact(Contact newcontact);
	Contact *getList(void);
	int		getSize(void);
};

#endif
