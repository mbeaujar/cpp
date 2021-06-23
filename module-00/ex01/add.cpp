/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbeaujar <mbeaujar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/23 13:20:52 by mbeaujar          #+#    #+#             */
/*   Updated: 2021/06/23 13:25:52 by mbeaujar         ###   ########.fr       */
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
