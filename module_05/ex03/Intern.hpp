/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbeaujar <mbeaujar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 17:05:14 by mbeaujar          #+#    #+#             */
/*   Updated: 2021/07/06 17:17:18 by mbeaujar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include <iostream>
#include "Form.hpp"

class Intern {
	private:
		Intern(Intern const &);	
		Intern &operator=(Intern const &);	
	public:
		Intern();	
		virtual ~Intern();

		Form* makeForm(std::string const &s1, std::string const &s2);
};

#endif