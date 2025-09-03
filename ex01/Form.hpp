/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmafueni <jmafueni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 20:50:08 by jmafueni          #+#    #+#             */
/*   Updated: 2025/09/03 20:37:22 by jmafueni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private:
		std::string const name;
		bool isSigned;
		int	const gradeToSign;
		int const gradeToExecute;
	public:
		Form();
		Form(std::string const & name, int gradeToSign, int gradeToExecute);
		Form(Form const & src);
		~Form();

		Form & operator=(Form const & rhs);
	std::string	getName() const;
	bool		getIsSigned() const;
	int			getGradeToSign() const;
	int			getGradeToExecute() const;

	void		beSigned(Bureaucrat const & b);
	class GradeTooHighException : public std::exception 
	{
		public:
			const char* what() const throw()
			{
				return "Grade is too high!";
			}
	};
	class GradeTooLowException : public std::exception 
	{
		public:
			const char* what() const throw()
			{
				return "Grade too low!";
			}
	};
};

std::ostream & operator<<(std::ostream & os, Form const & form);
