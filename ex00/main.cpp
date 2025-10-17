/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmafueni <jmafueni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 18:04:02 by jmafueni          #+#    #+#             */
/*   Updated: 2025/10/17 18:34:35 by jmafueni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <iostream>

int main()
{
	try {
		Bureaucrat b1("Alice", 2);
		std::cout << b1.getName() << ", grade: " << b1.getGrade() << std::endl;

		b1.incrementGrade();
		std::cout << b1.getName() << ", grade: " << b1.getGrade() << std::endl;

		b1.incrementGrade();
	}
	catch (std::exception & e) {
		std::cout << "Exception caught: " << e.what() << std::endl;
	}

	std::cout << "------------------------" << std::endl;

	try {
		Bureaucrat b2("Bob", 149);
		std::cout << b2.getName() << ", grade: " << b2.getGrade() << std::endl;

		b2.decrementGrade(); 
		std::cout << b2.getName() << ", grade: " << b2.getGrade() << std::endl;

		b2.decrementGrade();
	}
	catch (std::exception & e) {
		std::cout << "Exception caught: " << e.what() << std::endl;
	}

	std::cout << "------------------------" << std::endl;

	try {
		Bureaucrat b3("Charlie", 151);
		std::cout << b3.getName() << ", grade: " << b3.getGrade() << std::endl;
	}
	catch (std::exception & e) {
		std::cout << "Exception caught while creating b3: " << e.what() << std::endl;
	}

	return 0;
}
