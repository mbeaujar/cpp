/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbeaujar <mbeaujar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 15:06:15 by mbeaujar          #+#    #+#             */
/*   Updated: 2021/07/01 19:15:37 by mbeaujar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AssaultTerminator.hpp"

AssaultTerminator::AssaultTerminator() {
    std::cout << "* teleports from space *" << std::endl;
}
 
AssaultTerminator::AssaultTerminator(AssaultTerminator const & copy) {
    (void)copy;
}

AssaultTerminator::~AssaultTerminator() {
    std::cout << "I'll be back..." << std::endl;
}

AssaultTerminator & AssaultTerminator::operator=(AssaultTerminator const & copy) {
    (void)copy;
    return *this;
}

/* override Interface */

ISpaceMarine* AssaultTerminator::clone() const {
    ISpaceMarine *copy = new AssaultTerminator;
    return copy;
}

void AssaultTerminator::rangedAttack() const {
    std::cout << "* does nothing *" << std::endl;
}

void AssaultTerminator::battleCry() const {
    std::cout << "This code is unclean. PURIFY IT!" << std::endl;   
}

void AssaultTerminator::meleeAttack() const {
    std::cout << "* attacks with chainfists *" << std::endl;
}