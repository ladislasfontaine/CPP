/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lafontai <lafontai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/17 16:22:34 by lafontai          #+#    #+#             */
/*   Updated: 2020/07/30 11:21:00 by lafontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>
# include <string>
# include "Form.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

class Intern {
	public:
		Intern();
		Intern(const Intern &copy);
		~Intern();

		Intern	&operator=(const Intern &copy);
		Form*	makeForm(std::string const & name, std::string const & target);
		typedef Form*	(Intern::*Funcs)(std::string const &);

	private:
		Funcs	listFuncs[3];
		Form*	createFormOne(std::string const & target);
		Form*	createFormTwo(std::string const & target);
		Form*	createFormThree(std::string const & target);
};

#endif
