/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lafontai <lafontai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/26 18:48:15 by lafontai          #+#    #+#             */
/*   Updated: 2020/06/26 19:49:48 by lafontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <fstream>
#include <sstream>

void	readFromFile(std::string *text, std::string filename)
{
	std::ifstream		source(filename);
	std::string			line;
	std::stringstream	ss;

	if (!source)
	{
		std::cout << "Cannot open file: " << filename << std::endl;
		exit (1);
	}
	while (getline(source, line))
		ss << line << "\n";
	*text = ss.str();
	std::cout << *text << std::endl;
}

void	updateText(std::string *text, std::string s1, std::string s2)
{
	// attention si on remplace par la même string ou une string que se contient elle mm
	//while ((*text).find(s1) >= 0)
		(*text).replace((*text).find(s1), s1.length(), s2);
	std::cout << *text << std::endl;
}
//void	writeNewText(std::string text, std::string filename)
//{}

int		main(int argc, char **argv)
{
	if (argc == 4)
	{
		// vérifier que argv[2] et argv[3] ne sont pas vides
		// chercher dans la string des occurrences de s1
		// remplacer
		// copier string dans argv[1].replace
		std::string	text;

		readFromFile(&text, argv[1]);
		updateText(&text, argv[2], argv[3]);
		//writeNewText(text, argv[1]);
	}
	else
	{
		std::cout << "Wrong number of arguments. Should be 3 [filename s1 s2]." << std::endl;
		return (1);
	}
	return (0);
}