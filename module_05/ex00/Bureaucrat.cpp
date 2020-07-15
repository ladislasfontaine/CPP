/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lafontai <lafontai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/06 07:12:16 by lafontai          #+#    #+#             */
/*   Updated: 2020/07/12 10:54:00 by lafontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string const name, int grade) : _name(name) {
	if (grade >= 1 && grade <= 150)
		_grade = grade;
	else {
		if (grade < 1)
			throw Bureaucrat::GradeTooHighException();
		else if (grade > 150)
			throw Bureaucrat::GradeTooLowException();
		return ;
	}
}

Bureaucrat::~Bureaucrat() {
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy) {
	if (copy.getGrade() >= 1 && copy.getGrade() <= 150)
		*this = copy;
	else {
		if (copy.getGrade() < 1)
			throw Bureaucrat::GradeTooHighException();
		else if (copy.getGrade() > 150)
			throw Bureaucrat::GradeTooLowException();
		return ;
	}
}

Bureaucrat	&Bureaucrat::operator=(const Bureaucrat &copy) {
	_grade = copy.getGrade();
	return (*this);
}

std::string			Bureaucrat::getName() const {
	return (_name);
}
int					Bureaucrat::getGrade() const {
	return (_grade);
}

void				Bureaucrat::incrementGrade() {
	if (_grade > 1 && _grade <= 150)
		_grade--;
	else if (_grade <= 1)
		throw Bureaucrat::GradeTooHighException();
	else
		throw Bureaucrat::GradeTooLowException();
}
void				Bureaucrat::decrementGrade() {
	if (_grade >= 1 && _grade < 150)
		_grade++;
	else if (_grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else
		throw Bureaucrat::GradeTooLowException();
}

std::ostream&	operator<<(std::ostream& os, const Bureaucrat& obj) {
	os << obj.getName() << ", bureaucrat grade " << obj.getGrade() << std::endl;
	return (os);
}

/* Grade Too High Exception */
Bureaucrat::GradeTooHighException::GradeTooHighException() {
}
Bureaucrat::GradeTooHighException::GradeTooHighException(const GradeTooHighException &copy) {
	*this = copy;
}
Bureaucrat::GradeTooHighException::~GradeTooHighException() throw() {
}
Bureaucrat::GradeTooHighException	&Bureaucrat::GradeTooHighException::operator=(const GradeTooHighException &copy) {
	(void)copy;
	return (*this);
}
const char *	Bureaucrat::GradeTooHighException::what() const throw() {
	return ("Bureaucrat grade is too high");
}

/* Grade Too Low Exception */
Bureaucrat::GradeTooLowException::GradeTooLowException() {
}
Bureaucrat::GradeTooLowException::GradeTooLowException(const GradeTooLowException &copy) {
	*this = copy;
}
Bureaucrat::GradeTooLowException::~GradeTooLowException() throw() {
}
Bureaucrat::GradeTooLowException	&Bureaucrat::GradeTooLowException::operator=(const GradeTooLowException &copy) {
	(void)copy;
	return (*this);
}
const char *	Bureaucrat::GradeTooLowException::what() const throw() {
	return ("Bureaucrat grade is too low");
}