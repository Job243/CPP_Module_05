/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmafueni <jmafueni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/04 19:31:23 by jmafueni          #+#    #+#             */
/*   Updated: 2025/09/04 21:28:56 by jmafueni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include "AForm.hpp"

class PresidentialPardonForm: public AForm
{
private:
	std::string target;
public:
	PresidentialPardonForm(std::string target);
	PresidentialPardonForm(PresidentialPardonForm const & src);
	~PresidentialPardonForm();
	
	PresidentialPardonForm & operator=(PresidentialPardonForm const & rhs);
	
	void	execute(Bureaucrat const & executor) const;
};
