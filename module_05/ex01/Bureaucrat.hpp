/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lafontai <lafontai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/06 07:12:16 by lafontai          #+#    #+#             */
/*   Updated: 2020/07/15 15:09:21 by lafontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>
# include <exception>
# include "Form.hpp"

class Form;

class Bureaucrat {
	public:
		Bureaucrat(std::string const name, int grade);
		Bureaucrat();
		Bureaucrat(const Bureaucrat &copy);
		~Bureaucrat();

		Bureaucrat	&operator=(const Bureaucrat &copy);

		std::string 		getName() const;
		int					getGrade() const;
		void				incrementGrade();
		void				decrementGrade();
		void				signForm(const Form &form) const;

		class GradeTooHighException : public std::exception
		{
			public:
				GradeTooHighException();
				GradeTooHighException(const GradeTooHighException &copy);
				virtual ~GradeTooHighException() throw();
				GradeTooHighException	&operator=(const GradeTooHighException &copy);
				virtual const char *	what() const throw();
		};
		class GradeTooLowException : public std::exception
		{
			public:
				GradeTooLowException();
				GradeTooLowException(const GradeTooLowException &copy);
				virtual ~GradeTooLowException() throw();
				GradeTooLowException	&operator=(const GradeTooLowException &copy);
				virtual const char *	what() const throw();
		};

	private:
		std::string const	_name;
		int					_grade;
};

std::ostream&	operator<<(std::ostream& os, const Bureaucrat& obj);

#endif
