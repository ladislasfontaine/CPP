/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lafontai <lafontai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/17 11:49:25 by lafontai          #+#    #+#             */
/*   Updated: 2020/07/17 16:09:13 by lafontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("robotomy request", 72, 45), _target(target) {
}

RobotomyRequestForm::~RobotomyRequestForm() {
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy) : Form(copy) {
	*this = copy;
}

RobotomyRequestForm	&RobotomyRequestForm::operator=(const RobotomyRequestForm &copy) {
	_target = copy._target;
	return (*this);
}

void	RobotomyRequestForm::execute(Bureaucrat const & executor) const {
	executor.executeForm(*this);
	if (checkBeforeExecution(executor)) {
		std::cout << "** strong drill sound **" << std::endl;
		std::cout << _target << " has been robotomized." << std::endl;
	}
}
