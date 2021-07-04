/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbeaujar <mbeaujar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/04 15:19:26 by mbeaujar          #+#    #+#             */
/*   Updated: 2021/07/04 15:39:55 by mbeaujar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int main()
{
    Karen test;

    test.complain("DEBUG");
    test.complain("INFO");
    test.complain("WARNING");
    test.complain("ERROR");
    return (0);
}
