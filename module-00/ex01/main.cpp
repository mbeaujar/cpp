/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbeaujar <mbeaujar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/22 20:58:34 by mbeaujar          #+#    #+#             */
/*   Updated: 2021/06/23 17:40:45 by mbeaujar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

int refresh_contact(Contact list[8], int index) {
	std::string input;
	int nb;

	std::cout << "You have already 8 contacts" << std::endl;
	std::cout << "_____________________________________________" << std::endl;
	std::cout << "|   index  |first name| last name| nickname |" << std::endl;
	std::cout << "|----------|----------|----------|----------|" << std::endl;
	for (int i = 0; i < index; i++)
	{
		std::cout << "|" << "         " << i << "|";
		display_info_in_case(list[i].getfirstname());
		display_info_in_case(list[i].getlastname());
		display_info_in_case(list[i].getnickname());
		std::cout << std::endl;
	}
	std::cout << "_____________________________________________" << std::endl;
	std::cout << "Which one you want to remove ?" << std::endl;
	nb = recup_index_contact(index);
	if (nb == -1)
		return (1);
	list[nb].clearContact();
	if (add_contact(list, nb) == 1)
		return (1);
	return (0);
}

int main(void)
{
	std::string input;
	Contact list[8];
	int index = 0;

	while (1)
	{
		std::cout << "input : ";
		std::getline(std::cin, input);
		if (std::cin.eof() || input == "EXIT")
			break;
		if (input == "ADD")
		{
			if (index == 8)
			{
				if (refresh_contact(list, index))
					return (1);
				index--;
			}
			else if (add_contact(list, index))
				return (1);
			index++;
		}
		if (input == "SEARCH") {
			if (search_contact(list, index))
				return (1);
		}
	}
	return (1);
}