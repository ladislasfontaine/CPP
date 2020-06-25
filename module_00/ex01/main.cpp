/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lafontai <lafontai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/24 11:51:11 by lafontai          #+#    #+#             */
/*   Updated: 2020/06/25 10:46:08 by lafontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Contact.hpp"

void	add_contact(Contact *contact)
{
	std::string	input;
	std::string value[11] = {"first name", "last name", "nickname", "login", "postal address", "email address", "phone number", "birthday date", "favorite meal", "underwear color", "darkest secret"};

	for (int i(0); i < 11; i++){
		std::cout << "Contact " << value[i] << ": ";
		getline(std::cin, input);
		(*contact).setAttribute(i, input);
	}
	std::cout << ">> Contact added to your phonebook!" << std::endl;
}

void	search_contact(Contact contact[8], int n)
{
	int	i(-1);

	std::cout << "|   Index  |First Name| Last Name|  Pseudo  |" << std::endl;
	for (int i(0); i < 8 && i < n; i++) {
		contact[i].printContactLine(i);
	}
	std::cout << std::endl << "Index to look for: ";
	std::cin >> i;
	if (std::cin.fail()) {
		std::cin.clear();
		std::cout << "Wrong index." << std::endl;
	}
	else if (i < 0 || i >= n)
		std::cout << "Wrong index." << std::endl;
	else
		contact[i].printContactDetails();
	std::cin.ignore(10000, '\n');
}

int		main(void)
{
	int			n(0);
	std::string	userCommand;
	Contact		contact[8];

	while (1)
	{
		std::cout << ">> ";
		getline(std::cin, userCommand);
		if (userCommand.compare("EXIT") == 0) {
			exit (0);
		} else if (userCommand.compare("ADD") == 0) {
			if (n >= 8)
				std::cout << "Your phone book is full." << std::endl;
			else
				add_contact(&contact[n]);
			if (n < 8)
				n++;
		} else if (userCommand.compare("SEARCH") == 0) {
			if (n == 0)
				std::cout << "No contact in phonebook." << std::endl;
			else
				search_contact(contact, n);
		}
	}
	return (0);
}
