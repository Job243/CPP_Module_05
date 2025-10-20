/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmafueni <jmafueni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 18:05:02 by jmafueni          #+#    #+#             */
/*   Updated: 2025/10/20 18:01:53 by jmafueni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <string>
# include <iostream>

class Form;

class Bureaucrat
{
private:
	std::string	const name;
	int	grade;
public:
	Bureaucrat();
	Bureaucrat(std::string const & name, int grade);
	Bureaucrat(Bureaucrat const & src);
	~Bureaucrat();

	Bureaucrat & operator=(Bureaucrat const & rhs);

	std::string const & getName() const;
	int	getGrade() const;

	void	incrementGrade();
	void	decrementGrade();
	void		signForm(Form & form);

	class GradeTooHighExecption : public std::exception 
	{
		const char* what() const throw() { return "Grade too high!";}
	};
	class GradeTooLowExecption : public std::exception 
	{
		const char* what() const throw() { return "Grade too low!";}
	};
};

std::ostream & operator<<(std::ostream & os, Bureaucrat const & bureaucrat);

