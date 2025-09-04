/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmafueni <jmafueni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 20:50:35 by jmafueni          #+#    #+#             */
/*   Updated: 2025/09/04 19:27:23 by jmafueni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"

AForm::AForm():name("noname"), isSigned(false), gradeToSign(150), gradeToExecute(150)
{
}

AForm::~AForm()
{
}

AForm::AForm(std::string const & name, int gradeToSign, int gradeToExecute):name(name), isSigned(false), gradeToSign(gradeToSign), gradeToExecute(gradeToExecute)
{
	if (gradeToSign < 1 || gradeToExecute < 1)
		throw GradeTooHighException();
	else if (gradeToSign > 150 || gradeToExecute > 150)
		throw GradeTooLowException();
}

AForm::AForm(AForm const & src):name(src.name), isSigned(src.isSigned), gradeToSign(src.gradeToSign), gradeToExecute(src.gradeToExecute)
{
}

AForm & AForm::operator=(AForm const & rhs)
{
	if (this != &rhs)
		this->isSigned = rhs.isSigned;
	return *this;
}

std::string	AForm::getName() const
{
	return this->name;
}

bool		AForm::getIsSigned() const
{
	return this->isSigned;
}

int			AForm::getGradeToSign() const
{
	return this->gradeToSign;
}

int			AForm::getGradeToExecute() const
{
	return this->gradeToExecute;
}


void		AForm::beSigned(Bureaucrat const & b)
{
	if (this->isSigned)
		return;
	if (b.getGrade() > this->gradeToSign)
		throw GradeTooLowException();
	this->isSigned = true;
}

std::ostream & operator<<(std::ostream & os, AForm const & form)
{
	os << "Form: " << form.getName()
	<< " | Signed: " << (form.getIsSigned() ? "yes" : "no")
	<< " | Grade to sign: " << form.getGradeToSign()
	<< " | Grade to execute: " << form.getGradeToExecute();
	return os;
}
