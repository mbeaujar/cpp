/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbeaujar <mbeaujar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/25 18:25:59 by mbeaujar          #+#    #+#             */
/*   Updated: 2021/06/28 11:01:24 by mbeaujar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed {
	private:
		int _value;
		static const int _fractional_bits = 8;
	public:
		Fixed();
		Fixed(Fixed const & rhs);
		Fixed(int const & nb);
		Fixed(float const & nb);
		~Fixed();
		Fixed & operator=(Fixed const & rhs);
		Fixed 	operator+(Fixed const & rhs) const;
		Fixed 	operator-(Fixed const & rhs) const;
		Fixed 	operator/(Fixed const & rhs) const;
		Fixed 	operator*(Fixed const & rhs) const;
		Fixed & operator++();
		Fixed   operator++(int);
		Fixed & operator--();
		Fixed 	operator--(int);
		bool	operator<(Fixed const & rhs) const;
		bool	operator>(Fixed const & rhs) const;
		bool	operator<=(Fixed const & rhs) const;
		bool	operator>=(Fixed  const & rhs) const;
		bool	operator==(Fixed const & rhs) const;
		bool	operator!=(Fixed const & rhs) const;
		
		int getRawBits(void) const;
		const static Fixed & max(Fixed const & lhs, Fixed const & rhs);
		const static Fixed & min(Fixed const & lhs, Fixed const & rhs);
		static Fixed & max(Fixed & lhs, Fixed & rhs);
		static Fixed & min(Fixed & lhs, Fixed & rhs);
		void setRawBits(int const & nb);
		float toFloat(void) const;
		int toInt(void) const;
};

std::ostream & operator<<(std::ostream & o, Fixed const & rhs);

#endif