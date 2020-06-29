/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lafontai <lafontai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/26 18:48:15 by lafontai          #+#    #+#             */
/*   Updated: 2020/06/29 10:25:07 by lafontai         ###   ########.fr       */
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
	{
		if (source.eof())
			ss << line;
		else
			ss << line << std::endl;
	}
	*text = ss.str();
}

void	updateText(std::string *text, std::string s1, std::string s2)
{
	std::size_t	found;
	found = 0;
	if ((found = (*text).find(s1)) != std::string::npos)
		(*text).replace((*text).find(s1), s1.length(), s2);
	while ((found = (*text).find(s1, found + s2.length())) != std::string::npos)
		(*text).replace((*text).find(s1, found), s1.length(), s2);
}

void	writeNewText(std::string text, std::string filename)
{
	std::ofstream	newFile(filename.append(".replace").c_str());

	if (!newFile)
	{
		std::cout << "Could not create the new file " << filename.append(".replace") << std::endl;
		exit(1);
	}
	newFile << text;
}

int		main(int argc, char **argv)
{
	if (argc == 4)
	{
		std::string	text;

		if (((std::string)argv[2]).empty() || ((std::string)argv[3]).empty())
		{
			std::cout << "Empty string. s1 or s2 should not be empty." << std::endl;
			return (1);
		}
		readFromFile(&text, argv[1]);
		updateText(&text, argv[2], argv[3]);
		writeNewText(text, argv[1]);
	}
	else
	{
		std::cout << "Wrong number of arguments. Should be 3 [filename s1 s2]." << std::endl;
		return (1);
	}
	return (0);
}