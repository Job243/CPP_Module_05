/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmafueni <jmafueni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 18:04:02 by jmafueni          #+#    #+#             */
/*   Updated: 2025/09/08 20:41:58 by jmafueni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"


int main()
{
	Intern someRandomIntern;

	AForm* form1 = someRandomIntern.makeForm("shrubbery creation", "home");
	AForm* form2 = someRandomIntern.makeForm("robotomy request", "Bender");
	AForm* form3 = someRandomIntern.makeForm("presidential pardon", "Arthur Dent");
	// AForm* form4 = someRandomIntern.makeForm("unknown form", "nobody"); // doit échouer

	Bureaucrat bob("Bob", 1);

	if (form1)
	{
		bob.signForm(*form1);
		bob.executeForm(*form1);
		delete form1;
	}

	if (form2)
	{
		bob.signForm(*form2);
		bob.executeForm(*form2);
		delete form2;
	}

	if (form3)
	{
		bob.signForm(*form3);
		bob.executeForm(*form3);
		delete form3;
	}

	// form4 est NULL, donc rien à faire

	return 0;
}



