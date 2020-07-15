/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lafontai <lafontai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/12 10:37:32 by lafontai          #+#    #+#             */
/*   Updated: 2020/07/12 11:48:23 by lafontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(std::string name, int gradeToSign, int gradeToExecute) : _name(name), _signed(false), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute) {
	if (gradeToSign < 1 || gradeToExecute < 1)
		throw Form::GradeTooHighException();
	if (gradeToSign > 150 || gradeToExecute > 150)
		throw Form::GradeTooLowException();
}

Form::~Form() {
}

Form::Form(const Form &copy) : _name(copy.getName()), _gradeToSign(copy.getGradeToSign()), _gradeToExecute(copy.getGradeToExecute()) {
	*this = copy;
}

Form	&Form::operator=(const Form &copy) {
	_signed = copy.getSigned();
	return (*this);
}

std::string Form::getName() const {
	return (_name);
}
bool		Form::getSigned() const {
	return (_signed);
}
int			Form::getGradeToSign() const {
	return (_gradeToSign);
}
int			Form::getGradeToExecute() const {
	return (_gradeToExecute);
}
void		Form::beSigned(const Bureaucrat &bureaucrat) {
	bureaucrat.signForm(*this);
	if (bureaucrat.getGrade() <= _gradeToSign)
		_signed = true;
	else
		throw Form::GradeTooLowException();
}

std::ostream&	operator<<(std::ostream& os, const Form& obj) {
	os << obj.getName() << ", form with: grade to sign " << obj.getGradeToSign();
	os << ", grade to execute " << obj.getGradeToExecute();
	if (obj.getSigned())
		os << ", signed." << std::endl;
	else
		os << ", not signed." << std::endl;
	return (os);
}

/* Grade Too High Exception */
Form::GradeTooHighException::GradeTooHighException() {
}
Form::GradeTooHighException::GradeTooHighException(const GradeTooHighException &copy) {
	*this = copy;
}
Form::GradeTooHighException::~GradeTooHighException() throw() {
}
Form::GradeTooHighException	&Form::GradeTooHighException::operator=(const GradeTooHighException &copy) {
	(void)copy;
	return (*this);
}
const char *	Form::GradeTooHighException::what() const throw() {
	return ("Form grade to sign or to execute is too high");
}

/* Grade Too Low Exception */
Form::GradeTooLowException::GradeTooLowException() {
}
Form::GradeTooLowException::GradeTooLowException(const GradeTooLowException &copy) {
	*this = copy;
}
Form::GradeTooLowException::~GradeTooLowException() throw() {
}
Form::GradeTooLowException	&Form::GradeTooLowException::operator=(const GradeTooLowException &copy) {
	(void)copy;
	return (*this);
}
const char *	Form::GradeTooLowException::what() const throw() {
	return ("Form grade to sign or to execute is too low");
}