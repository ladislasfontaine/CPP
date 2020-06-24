/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lafontai <lafontai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/24 11:51:11 by lafontai          #+#    #+#             */
/*   Updated: 2020/06/24 19:10:04 by lafontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Contact.hpp"

// gérer plusieurs mots dans un champ de string
// index recherché == letter or string

void	add_contact(Contact *contact)
{
	std::string	input;

	std::cout << "Contact first name:      ";
	std::cin >> input;
	(*contact).setAttribute(0, input);
	std::cout << "Contact last name:       ";
	std::cin >> input;
	(*contact).setAttribute(1, input);
	std::cout << "Contact nickname:        ";
	std::cin >> input;
	(*contact).setAttribute(2, input);
	std::cout << "Contact login:           ";
	std::cin >> input;
	(*contact).setAttribute(3, input);
	std::cout << "Contact postal address:  ";
	std::cin >> input;
	(*contact).setAttribute(4, input);
	std::cout << "Contact email address:   ";
	std::cin >> input;
	(*contact).setAttribute(5, input);
	std::cout << "Contact phone number:    ";
	std::cin >> input;
	(*contact).setAttribute(6, input);
	std::cout << "Contact birth date:      ";
	std::cin >> input;
	(*contact).setAttribute(7, input);
	std::cout << "Contact favorite meal:   ";
	std::cin >> input;
	(*contact).setAttribute(8, input);
	std::cout << "Contact underwear color: ";
	std::cin >> input;
	(*contact).setAttribute(9, input);
	std::cout << "Contact darkest secret:  ";
	std::cin >> input;
	(*contact).setAttribute(10, input);
	std::cout << "Contact added to your phonebook!" << std::endl << std::endl;
}

void	search_contact(Contact contact[8], int n)
{
	int	i(-1);

	std::cout << "_____________________________________________" << std::endl;
	std::cout << "|          |          |          |          |" << std::endl;
	std::cout << "|   Index  |First Name| Last Name|  Pseudo  |" << std::endl;
	std::cout << "|__________|__________|__________|__________|" << std::endl;
	for (int i(0); i < 8 && i < n; i++) {
		contact[i].printContactLine(i);
	}
	std::cout << "|__________|__________|__________|__________|" << std::endl;
	while (i < 0 || i >= n)
	{
		std::cout << std::endl << "Index to look for: ";
		std::cin >> i;
		if (i < 0 || i >= n)
			std::cout << "Wrong index, try again." << std::endl;
	}
	contact[i].printContactDetails();
	std::cout << std::endl;
}

int		main(void)
{
	int			n(0);
	std::string	userCommand;
	Contact		contact[8];

	while (1)
	{
		std::cin >> userCommand;
		if (userCommand.compare("EXIT") == 0) {
			exit (0);
		} else if (userCommand.compare("ADD") == 0) {
			if (n >= 8)
				std::cout << "Your phone book is full." << std::endl;
			else
				add_contact(&contact[n]);
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
