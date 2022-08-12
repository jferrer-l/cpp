/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jferrer- <jferrer-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 16:22:54 by jferrer-          #+#    #+#             */
/*   Updated: 2022/08/11 19:57:56 by jferrer-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include "Contact.hpp"
# include <string>

Contact::Contact(std::string nfirst_name, std::string nlast_name, std::string nnickname, std::string nphone_number, std::string ndarkest_secret)
{
	printf("entro1\n");
	first_name = nfirst_name;
	last_name = nlast_name;
	nickname = nnickname;
	phone_number = nphone_number;
	darkest_secret = ndarkest_secret;
	index = 0;
	return;
}

Contact::Contact(void)
{
	printf("entro2\n");
	first_name = "";
	last_name = "";
	nickname = "";
	phone_number = "";
	darkest_secret = "";
	index = 0;
	return;
}

Contact::~Contact(void){ return; }

std::string Contact::getFirstName(void){ return (first_name); }

std::string Contact::getLastName(void){ return (last_name); }

std::string Contact::getNickname(void){ return (nickname); }

std::string Contact::getPhoneNumber(void){ return (phone_number); }

std::string Contact::getDarkestSecret(void){ return (darkest_secret); }

void	Contact::setIndex(int newindex){ index = newindex; }

int		Contact::getIndex(void){ return (index); }
