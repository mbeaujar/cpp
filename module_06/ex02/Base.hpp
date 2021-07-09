/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbeaujar <mbeaujar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/09 17:35:57 by mbeaujar          #+#    #+#             */
/*   Updated: 2021/07/09 22:40:25 by mbeaujar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
#define BASE_HPP

class Base;

class Base {
	public:
		virtual ~Base () {};
};

class A : public Base {};

class B : public Base {};

class C : public Base {};

#endif