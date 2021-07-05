/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbeaujar <mbeaujar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 14:03:10 by mbeaujar          #+#    #+#             */
/*   Updated: 2021/07/05 14:05:40 by mbeaujar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ACCOUNT_HPP
#define ACCOUNT_HPP

#include <iostream>

class Account {
    private:
        std::string _name;
    public:
        Account(std::string name);
        Account(Account const&);
        virtual ~Account();
        Account& operator=(Account const &);
        
        std::string getName() const;
};


#endif