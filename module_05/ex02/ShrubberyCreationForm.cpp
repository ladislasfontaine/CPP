/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lafontai <lafontai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/17 08:55:38 by lafontai          #+#    #+#             */
/*   Updated: 2020/07/17 16:09:18 by lafontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("shrubbery creation", 145, 137), _target(target) {
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy) : Form(copy) {
	*this = copy;
}

ShrubberyCreationForm	&ShrubberyCreationForm::operator=(const ShrubberyCreationForm &copy) {
	_target = copy._target;
	return (*this);
}

void	ShrubberyCreationForm::execute(Bureaucrat const & executor) const {
	executor.executeForm(*this);
	if (checkBeforeExecution(executor)) {
		std::ofstream	file((_target + "_shrubbery").c_str());
		if (file) {
			file << "                                  # #### ####" << std::endl;
			file << "                                ### \\/#|### |/####" << std::endl;
			file << "                               ##\\/#/ \\||/##/_/##/_#" << std::endl;
			file << "                             ###  \\/###|/ \\/ # ###" << std::endl;
			file << "                           ##_\\_#\\_\\## | #/###_/_####" << std::endl;
			file << "                          ## #### # \\ #| /  #### ##/##" << std::endl;
			file << "                           __#_--###`  |{,###---###-~" << std::endl;
			file << "                                     \\ }{" << std::endl;
			file << "                                      }}{" << std::endl;
			file << "                                      }}{" << std::endl;
			file << "                                 ejm  {{}" << std::endl;
			file << "                                , -=-~{ .-^- _" << std::endl;
			file << "                                      `}" << std::endl;
			file << "                                       {" << std::endl;
		}
		else
			std::cerr << "Error: could not create file" << std::endl;
	}
}
