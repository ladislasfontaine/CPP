/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lafontai <lafontai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/17 16:22:34 by lafontai          #+#    #+#             */
/*   Updated: 2020/07/17 18:32:57 by lafontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern() {
}

Intern::~Intern() {
}

Intern::Intern(const Intern &copy) {
	*this = copy;
}

Intern	&Intern::operator=(const Intern &copy) {
	return (*this);
}

Form*	Intern::createFormOne(std::string const & target) {
	return (new ShrubberyCreationForm(target));
}

Form*	Intern::createFormTwo(std::string const & target) {
	return (new RobotomyRequestForm(target));
}

Form*	Intern::createFormThree(std::string const & target) {
	return (new PresidentialPardonForm(target));
}

Form*	Intern::makeForm(std::string const & name, std::string const & target) {
	std::string	names[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
	typedef Form*	(Intern::*Funcs)(std::string const &);
	Funcs	listFuncs[3] = {&Intern::createFormOne, &Intern::createFormTwo, &Intern::createFormThree};

	for (int i(0); i < 3; i++) {
		if (name == names[i]) {
			std::cout << "Intern creates " << name << std::endl;
			return ((*listFuncs[i])(target));
		}
	}
	std::cout << "No form corresponds to: " << name << std::endl;
	return (NULL);
}
