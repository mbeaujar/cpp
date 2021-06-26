/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbeaujar <mbeaujar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/25 18:25:59 by mbeaujar          #+#    #+#             */
/*   Updated: 2021/06/25 20:15:09 by mbeaujar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed {
	private:
		int _value;
		static const int _fractional_bits = 8;
	public:
		Fixed();
		Fixed(Fixed const & rhs);
		~Fixed();

		Fixed & operator=(Fixed const & rhs);
		int getRawBits(void) const;		
};

#endif