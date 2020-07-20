/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lafontai <lafontai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/17 15:45:44 by lafontai          #+#    #+#             */
/*   Updated: 2020/07/17 16:09:01 by lafontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("presidential pardon", 25, 5), _target(target) {
}

PresidentialPardonForm::~PresidentialPardonForm() {
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &copy) : Form(copy) {
	*this = copy;
}

PresidentialPardonForm	&PresidentialPardonForm::operator=(const PresidentialPardonForm &copy) {
	_target = copy._target;
	return (*this);
}

void	PresidentialPardonForm::execute(Bureaucrat const & executor) const {
	executor.executeForm(*this);
	if (checkBeforeExecution(executor)) {
		std::cout << _target << " has been forgiven by Zafod Beeblebrox." << std::endl;
	}
}
