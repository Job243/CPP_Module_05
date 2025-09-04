/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmafueni <jmafueni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 18:04:02 by jmafueni          #+#    #+#             */
/*   Updated: 2025/09/04 21:39:45 by jmafueni         ###   ########.fr       */
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
		// Création de bureaucrates
		Bureaucrat bob("Bob", 50);
		Bureaucrat alice("Alice", 5);
		Bureaucrat jim("Jim", 150);

		// Création des formulaires
		ShrubberyCreationForm shrub("HomeGarden");
		RobotomyRequestForm robo("Bender");
		PresidentialPardonForm pardon("Marvin");

		std::cout << shrub << std::endl;
		std::cout << robo << std::endl;
		std::cout << pardon << std::endl;

		// Tentative de signature
		bob.signForm(shrub);     // devrait réussir
		jim.signForm(robo);      // devrait échouer (grade trop bas)
		alice.signForm(pardon);  // devrait réussir

		std::cout << shrub << std::endl;
		std::cout << robo << std::endl;
		std::cout << pardon << std::endl;

		// Tentative d'exécution
		bob.executeForm(shrub);      // devrait réussir
		alice.executeForm(robo);     // devrait échouer (non signé)
		alice.executeForm(pardon);   // devrait réussir

		// Tentative d'exécution avec grade trop bas
		jim.executeForm(shrub);      // devrait échouer (grade trop bas)

	} catch (std::exception & e) {
		std::cout << "Exception: " << e.what() << std::endl;
	}

	return 0;
}


