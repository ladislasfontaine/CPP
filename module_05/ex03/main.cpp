/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lafontai <lafontai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/10 15:13:13 by lafontai          #+#    #+#             */
/*   Updated: 2020/07/30 16:54:52 by lafontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <exception>
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int		main() {
	Intern someRandomIntern;
	Form* rrf;
	Form* scf;
	Form* ppf;
	Form* wf;
	rrf = someRandomIntern.makeForm("robotomy request", "Bender");
	scf = someRandomIntern.makeForm("shrubbery creation", "Maxou");
	ppf = someRandomIntern.makeForm("presidential pardon", "Johno");
	wf = someRandomIntern.makeForm("false argument", "Robert");

	Bureaucrat	ceo("Jeff", 1);
	std::cout << *ppf;

	// ATTENTION fonction signForm qui ne semble pas réellement signer la Form
	ceo.signForm(*ppf);
	ppf->beSigned(ceo);
	ceo.executeForm(*ppf);

/*
	std::cout << ">>> TEST 1 - ok <<<" << std::endl;
	try
	{
		ShrubberyCreationForm	tree("home");
		Bureaucrat	john("John", 12);
		std::cout << tree;
		std::cout << john;
		tree.beSigned(john);
		tree.execute(john);
		std::cout << tree;
	}
	catch (std::exception & e)
	{
		std::cerr << "Error: " << e.what() << std::endl;
	}
	std::cout << ">>> TEST 2 - grade too low <<<" << std::endl;
	try
	{
		RobotomyRequestForm	robot("Ivan");
		Bureaucrat	max("Maxime", 50);
		std::cout << robot;
		std::cout << max;
		robot.beSigned(max);
		robot.execute(max);
		std::cout << robot;
	}
	catch (std::exception & e)
	{
		std::cerr << "Error: " << e.what() << std::endl;
	}
	std::cout << ">>> TEST 3 - ok <<<" << std::endl;
	try
	{
		RobotomyRequestForm	robot2("Ivan");
		Bureaucrat	marc("Marco", 45);
		std::cout << robot2;
		std::cout << marc;
		robot2.beSigned(marc);
		robot2.execute(marc);
		std::cout << robot2;
	}
	catch (std::exception & e)
	{
		std::cerr << "Error: " << e.what() << std::endl;
	}
	std::cout << ">>> TEST 4 - not signed <<<" << std::endl;
	try
	{
		RobotomyRequestForm	robot3("Ivan");
		Bureaucrat	jo("Johny", 45);
		std::cout << robot3;
		std::cout << jo;
		robot3.execute(jo);
		std::cout << robot3;
	}
	catch (std::exception & e)
	{
		std::cerr << "Error: " << e.what() << std::endl;
	}
	std::cout << ">>> TEST 5 - presidential pardon <<<" << std::endl;
	try
	{
		PresidentialPardonForm	sorry("David");
		Bureaucrat	alb("Alberto", 2);
		std::cout << sorry;
		std::cout << alb;
		sorry.beSigned(alb);
		sorry.execute(alb);
		std::cout << sorry;
	}
	catch (std::exception & e)
	{
		std::cerr << "Error: " << e.what() << std::endl;
	}
*/
	return (0);
}