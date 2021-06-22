/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbeaujar <mbeaujar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/22 20:58:34 by mbeaujar          #+#    #+#             */
/*   Updated: 2021/06/22 23:50:56 by mbeaujar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void call_fct(Contact *list, void (Contact::*f)(std::string), std::string input)
{
	(list->*f)(input);
}

int add_contact(Contact list[8], int index)
{
	std::string str[11] = {"First name : ", "Last name : ", "Nickname : ",
						   "Login : ", "postal address : ", "email adress : ",
						   "phone number : ", "birthday date : ", "favorite meal : ",
						   "underwear color : ", "darkset color : "};
	void (Contact::*f[])(std::string) = {&Contact::setfirstname, &Contact::setlastname, &Contact::setnickname,
										 &Contact::setlogin, &Contact::setpostaladdress, &Contact::setemailaddress,
										 &Contact::setphonenumber, &Contact::setbirthdaydate, &Contact::setfavoritemeal,
										 &Contact::setunderwearcolor, &Contact::setdarkestsecret};
	std::string input;
	for (int i = 0; i < 11; i++)
	{
		std::cout << str[i];
		std::getline(std::cin, input);
		if (std::cin.eof())
			return (1);
		call_fct(&list[index], f[i], input);
	}
	return (0);
}

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

int atoi(std::string str)
{
	int nb;
	int i;

	i = 0;
	nb = 0;
	while (str[i] >= '0' && str[i] <= '9')
		nb = (nb * 10) + (str[i++] - '0');
	return (nb);
}

std::string call_fct_contact(Contact *list, std::string (Contact::*f)() const)
{
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

int recup_index_contact(Contact list[8], int index)
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
			return (1);
		if (input.length() != 1)
			return (1);
		nb = atoi(input);
		if (nb > index)
			std::cout << "Invalid index type a new index";
		else
			is_good = 0;
	}
	print_index_contact(list[nb]);
	return (0);
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
	recup_index_contact(list, index);
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
		if (std::cin.eof())
			break;
		if (input == "EXIT")
			break;
		if (input == "ADD")
		{
			if (add_contact(list, index))
				return (1);
			index++;
		}
		if (input == "SEARCH")
		{
			if (search_contact(list, index))
				return (1);
		}
		if (index == 8)
			break;
	}
	return (1);
}