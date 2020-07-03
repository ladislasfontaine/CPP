/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lafontai <lafontai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/02 13:44:13 by lafontai          #+#    #+#             */
/*   Updated: 2020/07/02 16:33:40 by lafontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "Peon.hpp"
#include "OtherPeon.hpp"

int main() {
	Sorcerer	robert("Robert", "the Magnificent");
	Victim		jim("Jimmy");
	Peon		joe("Joe");
	OtherPeon	marc("Marcus");
	Peon		leo(joe);
	Sorcerer	gandalf("Gandalf", "the White");

	std::cout << robert << jim << joe << marc << gandalf;
	robert.polymorph(jim);
	robert.polymorph(joe);
	gandalf.polymorph(marc);
	return 0;
}
