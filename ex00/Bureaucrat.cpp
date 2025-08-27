/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmafueni <jmafueni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 18:04:43 by jmafueni          #+#    #+#             */
/*   Updated: 2025/08/27 21:19:56 by jmafueni         ###   ########.fr       */
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

Bureaucrat & Bureaucrat::operator=(Bureaucrat const & rhs)
{
	if (this != &rhs)
		this->grade = rhs.grade;
	return *this;
}
