/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbeaujar <mbeaujar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/23 13:20:46 by mbeaujar          #+#    #+#             */
/*   Updated: 2021/06/23 13:36:32 by mbeaujar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"


int ft_strlen(std::string s)
{
	int i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

void display_info_in_case(std::string info)
{
	int len = ft_strlen(info);
	if (len > 10)
	{
		info[9] = '.';
		len = 0;
		while (info[len] != '.')
			std::cout << info[len++];
		std::cout << info[len];
	}
	else
	{
		while (len < 10)
		{
			std::cout << " ";
			len++;
		}
		std::cout << info;
	}
	std::cout << "|";
}

std::string call_fct_contact(Contact *list, std::string (Contact::*f)() const) {
	return ((list->*f)());
}

void print_index_contact(Contact list)
{
	std::string str[11] = {"First name : ", "Last name : ", "Nickname : ",
						   "Login : ", "postal address : ", "email adress : ",
						   "phone number : ", "birthday date : ", "favorite meal : ",
						   "underwear color : ", "darkset color : "};
	std::string (Contact::*f[])(void) const = {&Contact::getfirstname, &Contact::getlastname, &Contact::getnickname,
											   &Contact::getlogin, &Contact::getpostaladdress, &Contact::getemailaddress,
											   &Contact::getphonenumber, &Contact::getbirthdaydate, &Contact::getfavoritemeal,
											   &Contact::getunderwearcolor, &Contact::getdarkestsecret};
	for (int i = 0; i < 11; i++)
	{
		std::cout << str[i] << call_fct_contact(&list, f[i]) << std::endl;
	}
}

int recup_index_contact(int index)
{
	std::string input;
	int nb;
	int is_good;

	is_good = 1;
	while (is_good)
	{
		std::cout << "Index : ";
		std::getline(std::cin, input);
		if (std::cin.eof())
			return (-1);
		if (input.length() == 1)
			nb = input[0] - '0';
		else
			nb = -1;
		if (nb == -1 || nb >= index)
			std::cout << "Error : invalid index ! Type a new index" << std::endl;
		else
			is_good = 0;
	}
	return (nb);
}

int search_contact(Contact list[8], int index)
{
	if (index == 0)
	{
		std::cout << "There is no contact" << std::endl;
		return (0);
	}
	std::cout << "_____________________________________________" << std::endl;
	std::cout << "|   index  |first name| last name| nickname |" << std::endl;
	std::cout << "|----------|----------|----------|----------|" << std::endl;
	for (int i = 0; i < index; i++)
	{
		std::cout << "|"
				  << "         " << i << "|";
		display_info_in_case(list[i].getfirstname());
		display_info_in_case(list[i].getlastname());
		display_info_in_case(list[i].getnickname());
		std::cout << std::endl;
	}
	std::cout << "_____________________________________________" << std::endl;
	int nb;
	if ((nb = recup_index_contact(index)) == -1)
		return (1);
	print_index_contact(list[nb]);
	return (0);
}
