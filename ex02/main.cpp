/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmafueni <jmafueni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 18:04:02 by jmafueni          #+#    #+#             */
/*   Updated: 2025/10/17 21:45:04 by jmafueni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <iostream>

int main()
{
	
	try {
		Bureaucrat bob("Bob", 50);
		Bureaucrat alice("Alice", 5);
		Bureaucrat jim("Jim", 70);

		ShrubberyCreationForm shrub("HomeGarden");
		RobotomyRequestForm robo("Bender");
		PresidentialPardonForm pardon("Marvin");

		std::cout << shrub << std::endl;
		std::cout << robo << std::endl;
		std::cout << pardon << std::endl;

		bob.signForm(shrub);
		jim.signForm(robo);
		alice.signForm(pardon);

		std::cout << shrub << std::endl;
		std::cout << robo << std::endl;
		std::cout << pardon << std::endl;

		bob.executeForm(shrub);
		alice.executeForm(robo);
		alice.executeForm(pardon);

		jim.executeForm(shrub);      

	} catch (std::exception & e) {
		std::cout << "Exception: " << e.what() << std::endl;
	}

	return 0;
}


