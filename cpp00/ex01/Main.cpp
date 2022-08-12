/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jferrer- <jferrer-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 13:51:06 by jferrer-          #+#    #+#             */
/*   Updated: 2022/08/11 22:44:19 by jferrer-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <string>
# include "PhoneBook.hpp"

static bool	is_digits(const std::string &str);
static void	new_contact(PhoneBook *p_list);
static void	search_contacts(PhoneBook *p_list);

int main(int argc, char **argv)
{
	std::string	input = "";
	PhoneBook p_list;

	while (input != "EXIT")
	{
		std::cout << '>';
		std::getline(std::cin, input);
		if (input == "ADD")
			new_contact(&p_list);
		else if (input == "SEARCH")
			search_contacts(&p_list);
		std::cout << input;
	}
}

static std::string	cut_string(std::string str)
{
	std::string temp = "          ";
	if (str.length() > 10)
		return (str.substr(0, 9).append("."));
	else if (str.length() == 10)
		return (str);
	else
		return (temp.substr(0, (10 - str.length())).append(str));
}

static void	print_contact(Contact contact)
{
	std::cout << "*         " << contact.getIndex() << "|";
	std::cout << cut_string(contact.getFirstName()) << "|";
	std::cout << cut_string(contact.getLastName()) << "|";
	std::cout << cut_string(contact.getNickname()) << "*" << std::endl;
}

static void	print_contact2(Contact contact)
{
	std::cout << "First Name: " << contact.getFirstName() << std::endl;
	std::cout << "Last Name: " << contact.getLastName() << std::endl;
	std::cout << "Nickname: " << contact.getNickname() << std::endl;
	std::cout << "Phone Number: " << contact.getPhoneNumber() << std::endl;
	std::cout << "Darkest Secret: " << contact.getDarkestSecret() << std::endl;
}

static void	search_contacts(PhoneBook *p_list)
{
	int		j;
	int		input = 0;
	Contact	*temp = (*p_list).getList();
	std::cout << "*********************************************" << std::endl;
	for (int i = 1; i <= (*p_list).getSize(); i++)
	{
		j = 0;
		for (j = 0;i != ((*p_list).getList())[j].getIndex(); j++);
		print_contact(temp[j]);
	}
	std::cout << "*********************************************" << std::endl;
	while (input == 0)
	{
		std::cout << "Insert the contact index" << std::endl;
		std::cin >> input;
		for (int i = 0; i < (*p_list).getSize(); i++)
		{
			if (((*p_list).getList())[i].getIndex() == input)
			{
				print_contact2(((*p_list).getList())[i]);
				return;
			}
		}
		std::cin.clear();
		std::cin.ignore(10000,'\n');
		std::cout << "Invalid contact index" << std::endl;
		input = 0;
	}
}

static bool is_digits(const std::string &str)
{
	return (str.find_first_not_of("0123456789") == std::string::npos);
}

static void	new_contact(PhoneBook *p_list)
{
	std::string vars[5];
	int			i = 0;

	while (i < 5)
	{
		switch (i)
		{
		case 0:
			std::cout << "Introduce the contact first name:";
			break;
		case 1:
			std::cout << "Introduce the contact last name:";
			break;
		case 2:
			std::cout << "Introduce the contact nickname:";
			break;
		case 3:
			std::cout << "Introduce the contact phone number:";
			break;
		case 4:
			std::cout << "Introduce the contact darkest secret:";
			break;
		}
		std::getline(std::cin, vars[i]);
		if ((i != 3 || is_digits(vars[i])) && vars[i] != "")
			i++;
		else
			std::cout << "Invalid input" << std::endl;
	}
	Contact newc(vars[0], vars[1], vars[2], vars[3], vars[4]);
	(*p_list).addContact(newc);
}
