/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmafueni <jmafueni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 20:50:35 by jmafueni          #+#    #+#             */
/*   Updated: 2025/09/03 20:39:04 by jmafueni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form():name("noname"), isSigned(false), gradeToSign(150), gradeToExecute(150)
{
}

Form::~Form()
{
}

Form::Form(std::string const & name, int gradeToSign, int gradeToExecute):name(name), isSigned(false), gradeToSign(gradeToSign), gradeToExecute(gradeToExecute)
{
	if (gradeToSign < 1 || gradeToExecute < 1)
		throw GradeTooHighException();
	else if (gradeToSign > 150 || gradeToExecute > 150)
		throw GradeTooLowException();
}

Form::Form(Form const & src):name(src.name), isSigned(src.isSigned), gradeToSign(src.gradeToSign), gradeToExecute(src.gradeToExecute)
{
}

Form & Form::operator=(Form const & rhs)
{
	if (this != &rhs)
		this->isSigned = rhs.isSigned;
	return *this;
}

std::string	Form::getName() const
{
	return this->name;
}

bool		Form::getIsSigned() const
{
	return this->isSigned;
}

int			Form::getGradeToSign() const
{
	return this->gradeToSign;
}

int			Form::getGradeToExecute() const
{
	return this->gradeToExecute;
}


void		Form::beSigned(Bureaucrat const & b)
{
	if (b.getGrade() > this->gradeToSign)
		throw GradeTooLowException();
	this->isSigned = true;
}

std::ostream & operator<<(std::ostream & os, Form const & form)
{
	os << "Form: " << form.getName()
	<< " | Signed: " << (form.getIsSigned() ? "yes" : "no")
	<< " | Grade to sign: " << form.getGradeToSign()
	<< " | Grade to execute: " << form.getGradeToExecute();
	return os;
}

