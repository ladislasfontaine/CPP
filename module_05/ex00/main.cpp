/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lafontai <lafontai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/10 15:13:13 by lafontai          #+#    #+#             */
/*   Updated: 2020/07/12 10:56:00 by lafontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <exception>
#include "Bureaucrat.hpp"

int		main() {
	std::cout << ">>> TEST 1 <<<" << std::endl;
	try
	{
		Bureaucrat	john("John", 12);
		std::cout << john;
		Bureaucrat	max("Max", 42);
		std::cout << max;
		Bureaucrat	luke("Luke", 1442);
		std::cout << luke;
	}
	catch (std::exception & e)
	{
		std::cerr << "Error: " << e.what() << std::endl;
	}
	std::cout << ">>> TEST 2 <<<" << std::endl;
	try
	{
		Bureaucrat	jen("Jenny", 1);
		std::cout << jen;
		Bureaucrat	lola("Lola", -22221);
		std::cout << lola;
	}
	catch (std::exception & e)
	{
		std::cerr << "Error: " << e.what() << std::endl;
	}
	std::cout << ">>> TEST 3 <<<" << std::endl;
	try
	{
		Bureaucrat	dan("Daniel", 145);
		std::cout << dan;
		for (int i(0); i < 10; i++) {
			dan.decrementGrade();
			std::cout << dan.getName() << " new grade: " << dan.getGrade() << std::endl;
		}
	}
	catch (std::exception & e)
	{
		std::cerr << "Error: " << e.what() << std::endl;
	}
	std::cout << ">>> TEST 4 <<<" << std::endl;
	try
	{
		Bureaucrat	jen("Jenna", 3);
		std::cout << jen;
		for (int i(0); i < 10; i++) {
			jen.incrementGrade();
			std::cout << jen.getName() << " new grade: " << jen.getGrade() << std::endl;
		}
	}
	catch (std::exception & e)
	{
		std::cerr << "Error: " << e.what() << std::endl;
	}
	return (0);
}