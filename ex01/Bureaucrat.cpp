/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmafueni <jmafueni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 18:04:43 by jmafueni          #+#    #+#             */
/*   Updated: 2025/09/02 20:26:39 by jmafueni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat():name("noname"),grade(150)
{
}

Bureaucrat::~Bureaucrat()
{
}

Bureaucrat::Bureaucrat(std::string const & name, int grade):name(name)
{
	if (grade < 1)
		throw Bureaucrat::GradeTooHighExecption();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowExecption();
	this->grade = grade;
}

Bureaucrat::Bureaucrat(Bureaucrat const & src):name(src.name), grade(src.grade)
{
}


std::string const & Bureaucrat::getName() const
{
	return this->name;
}

int	Bureaucrat::getGrade() const
{
	return this->grade;
}

void	Bureaucrat::incrementGrade()
{
	if (this->grade <= 1)
	throw Bureaucrat::GradeTooHighExecption();
	this->grade--;
}

void	Bureaucrat::decrementGrade()
{
	if (this->grade >= 150)
		throw Bureaucrat::GradeTooLowExecption();
	this->grade++;
}

Bureaucrat & Bureaucrat::operator=(Bureaucrat const & rhs)
{
	if (this != &rhs)
		this->grade = rhs.grade;
	return *this;
}
