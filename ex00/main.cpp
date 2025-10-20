/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmafueni <jmafueni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 18:04:02 by jmafueni          #+#    #+#             */
/*   Updated: 2025/10/20 17:51:45 by jmafueni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <iostream>

int main()
{
	try {
		Bureaucrat b1("Alice", 2);
		std::cout << b1 << std::endl;

		b1.incrementGrade();
		std::cout << b1 << std::endl;

		b1.incrementGrade();
	}
	catch (std::exception & e) {
		std::cout << "Exception caught: " << e.what() << std::endl;
	}

	std::cout << "------------------------" << std::endl;

	try {
		Bureaucrat b2("Bob", 149);
		std::cout << b2 << std::endl;

		b2.decrementGrade(); 
		std::cout << b2 << std::endl;

		b2.decrementGrade();
	}
	catch (std::exception & e) {
		std::cout << "Exception caught: " << e.what() << std::endl;
	}

	std::cout << "------------------------" << std::endl;

	try {
		Bureaucrat b3("Charlie", 151);
		std::cout << b3 << std::endl;
	}
	catch (std::exception & e) {
		std::cout << "Exception caught while creating b3: " << e.what() << std::endl;
	}

	return 0;
}
