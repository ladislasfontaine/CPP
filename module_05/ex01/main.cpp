/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lafontai <lafontai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/10 15:13:13 by lafontai          #+#    #+#             */
/*   Updated: 2020/07/15 15:19:17 by lafontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <exception>
#include "Bureaucrat.hpp"
#include "Form.hpp"

int		main() {
	std::cout << ">>> TEST 1 <<<" << std::endl;
	try
	{
		Form		f1("Paperwork", 40, 30);
		Bureaucrat	john("John", 12);
		std::cout << f1;
		std::cout << john;
		f1.beSigned(john);
		std::cout << f1;
	}
	catch (std::exception & e)
	{
		std::cerr << "Error: " << e.what() << std::endl;
	}
	std::cout << ">>> TEST 2 <<<" << std::endl;
	try
	{
		Form		f2("Questionnaire 12088", 40, 30);
		Bureaucrat	max("Max", 42);
		std::cout << f2;
		std::cout << max;
		f2.beSigned(max);
		std::cout << f2;
	}
	catch (std::exception & e)
	{
		std::cerr << "Error: " << e.what() << std::endl;
	}
	std::cout << ">>> TEST 3 <<<" << std::endl;
	try
	{
		Form	f3("Questionnaire 97744", 0, 30);
	}
	catch (std::exception & e)
	{
		std::cerr << "Error: " << e.what() << std::endl;
	}
	std::cout << ">>> TEST 4 <<<" << std::endl;
	try
	{
		Form	f4("Questionnaire 97744", 12, 1130);
	}
	catch (std::exception & e)
	{
		std::cerr << "Error: " << e.what() << std::endl;
	}
	return (0);
}