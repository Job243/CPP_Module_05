/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmafueni <jmafueni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/04 19:29:11 by jmafueni          #+#    #+#             */
/*   Updated: 2025/09/04 20:58:03 by jmafueni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string name):AForm("ShrubberyCreation", 145, 137), target(name) 
{	
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & src): AForm(src), target(src.target)
{
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	
}


ShrubberyCreationForm & ShrubberyCreationForm::operator=(ShrubberyCreationForm const & rhs)
{
	if (this != &rhs)
		this->target = rhs.target;
	return *this;
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	if (!this->getIsSigned())
		throw std::runtime_error("Form is not signed!");
	if (executor.getGrade() > this->getGradeToExecute())
		throw GradeTooLowException();

	std::ofstream file((target + "_shrubbery").c_str());
	if (!file)
		throw std::runtime_error("Could not open file for writing!");

	file << "     *     " << std::endl;
	file << "    ***    " << std::endl;
	file << "   *****   " << std::endl;
	file << "  *******  " << std::endl;
	file << "     |     " << std::endl;

	file.close();
	std::cout << "ShrubberyCreationForm: created " << target << "_shrubbery" << std::endl;
}
