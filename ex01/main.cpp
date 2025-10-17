/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmafueni <jmafueni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 18:04:02 by jmafueni          #+#    #+#             */
/*   Updated: 2025/10/17 18:36:28 by jmafueni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	try
	{
		Bureaucrat bob("Bob", 50);
		Bureaucrat jim("Jim", 120);

		Form f1("Top Secret", 45, 20);
		Form f2("Basic Report", 100, 80);

		std::cout << f1 << std::endl;
		std::cout << f2 << std::endl;

		bob.signForm(f1);
		bob.signForm(f2);
		jim.signForm(f2);

		std::cout << f1 << std::endl;
		std::cout << f2 << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << "Exception: " << e.what() << std::endl;
	}
	return 0;
}
