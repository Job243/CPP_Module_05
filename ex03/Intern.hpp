/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmafueni <jmafueni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 19:13:33 by jmafueni          #+#    #+#             */
/*   Updated: 2025/09/08 20:45:35 by jmafueni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>

class AForm;

class Intern
{
private:
	
public:
	Intern();
	~Intern();
	Intern(Intern const &);

	Intern & operator=(Intern const &);
	AForm* makeForm(std::string AForm, std::string target);
};

