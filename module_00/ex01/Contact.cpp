/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lafontai <lafontai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/24 10:51:00 by lafontai          #+#    #+#             */
/*   Updated: 2020/06/25 11:00:58 by lafontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "Contact.hpp"

Contact::Contact()
{
}

Contact::~Contact()
{
}

void	Contact::printContactDetails() const
{
	std::cout << "CONTACT INFORMATIONS" << std::endl;
	std::cout << "First name:         " << firstName << std::endl;
	std::cout << "Last name:          " << lastName << std::endl;
	std::cout << "Nickname:           " << nickname << std::endl;
	std::cout << "Login:              " << login << std::endl;
	std::cout << "Postal address:     " << postalAddress << std::endl;
	std::cout << "Email address:      " << emailAddress << std::endl;
	std::cout << "Phone number:       " << phoneNumber << std::endl;
	std::cout << "Birthday:           " << birthdayDate << std::endl;
	std::cout << "Favorite meal:      " << favoriteMeal << std::endl;
	std::cout << "Underwear color:    " << underwearColor << std::endl;
	std::cout << "Darkest secret:     " << darkestSecret << std::endl;
}

void	Contact::printContactLine(int index) const
{
	std::cout << "|" << std::string(9, ' ') << index << "|";
	if (firstName.length() <= 10)
		std::cout << std::string(10 - firstName.length(), ' ') << firstName << "|";
	else
		std::cout << firstName.substr(0, 9) << ".|";
	if (lastName.length() <= 10)
		std::cout << std::string(10 - lastName.length(), ' ') << lastName << "|";
	else
		std::cout << lastName.substr(0, 9) << ".|";
	if (nickname.length() <= 10)
		std::cout << std::string(10 - nickname.length(), ' ') << nickname << "|" << std::endl;
	else
		std::cout << nickname.substr(0, 9) << ".|" << std::endl;
}

void	Contact::setAttribute(int index, std::string str)
{
	if (index == 0) {
		firstName = str;
	} else if (index == 1) {
		lastName = str;
	} else if (index == 2) {
		nickname = str;
	} else if (index == 3) {
		login = str;
	} else if (index == 4) {
		postalAddress = str;
	} else if (index == 5) {
		emailAddress = str;
	} else if (index == 6) {
		phoneNumber = str;
	} else if (index == 7) {
		birthdayDate = str;
	} else if (index == 8) {
		favoriteMeal = str;
	} else if (index == 9) {
		underwearColor = str;
	} else if (index == 10) {
		darkestSecret = str;
	}
}
