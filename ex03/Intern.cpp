/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmafueni <jmafueni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 19:28:53 by jmafueni          #+#    #+#             */
/*   Updated: 2025/09/08 20:45:28 by jmafueni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

Intern::Intern()
{
	
}

Intern::~Intern()
{
	
}

Intern::Intern(Intern const &)
{
}


Intern & Intern::operator=(Intern const &)
{
	return *this;		
}

AForm* Intern::makeForm(std::string formName, std::string target)
{
	std::string forms[3] = {
			"shrubbery creation",
			"robotomy request",
			"presidential pardon"
		};

		AForm* newForm = NULL;

		for (int i = 0; i < 3; i++)
		{
			if (formName == forms[i])
			{
				switch (i)
				{
					case 0:
						newForm = new ShrubberyCreationForm(target);
						break;
					case 1:
						newForm = new RobotomyRequestForm(target);
						break;
					case 2:
						newForm = new PresidentialPardonForm(target);
						break;
				}
				std::cout << "Intern creates " << formName << std::endl;
				return newForm;
			}
		}
		std::cout << "Intern cannot create " << formName << " (unknown form)" << std::endl;
		return NULL;
}
