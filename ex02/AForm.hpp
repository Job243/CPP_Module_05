/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmafueni <jmafueni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 20:50:08 by jmafueni          #+#    #+#             */
/*   Updated: 2025/09/04 21:38:35 by jmafueni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <string>
# include <iostream>

class Bureaucrat;

class AForm
{
	private:
		std::string const name;
		bool isSigned;
		int	const gradeToSign;
		int const gradeToExecute;
	public:
		AForm();
		AForm(std::string const & name, int gradeToSign, int gradeToExecute);
		AForm(AForm const & src);
		virtual ~AForm();

		AForm & operator=(AForm const & rhs);
		virtual void execute(Bureaucrat const & executor) const = 0;

		
		std::string	getName() const;
		bool		getIsSigned() const;
		int			getGradeToSign() const;
		int			getGradeToExecute() const;

		void		beSigned(Bureaucrat const & b);
		class GradeTooHighException : public std::exception 
		{
			public:
				const char* what() const throw() { return "Grade is too high!";}
		};
		class GradeTooLowException : public std::exception 
		{
			public:
				const char* what() const throw() { return "Grade too low!";}
		};
		class FormNotSignedException : public std::exception
		{
    		public:
        		const char* what() const throw() { return "Form is not signed!";}
    };
};

std::ostream & operator<<(std::ostream & os, AForm const & form);
