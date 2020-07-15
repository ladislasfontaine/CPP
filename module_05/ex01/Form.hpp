/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lafontai <lafontai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/12 10:37:32 by lafontai          #+#    #+#             */
/*   Updated: 2020/07/15 15:09:43 by lafontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <string>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
	public:
		Form();
		Form(std::string name, int gradeToSign, int gradeToExecute);
		Form(const Form &copy);
		~Form();

		Form	&operator=(const Form &copy);

		std::string getName() const;
		bool		getSigned() const;
		int			getGradeToSign() const;
		int			getGradeToExecute() const;
		void		beSigned(const Bureaucrat &bureaucrat);

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
		bool				_signed;
		int const			_gradeToSign;
		int const			_gradeToExecute;
};

std::ostream&	operator<<(std::ostream& os, const Form& obj);

#endif
