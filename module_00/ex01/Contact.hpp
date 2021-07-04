/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbeaujar <mbeaujar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/22 21:00:21 by mbeaujar          #+#    #+#             */
/*   Updated: 2021/07/04 16:37:58 by mbeaujar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>

typedef void(*setFct)();

class Contact {
	std::string _first_name;
	std::string _last_name;
	std::string _nickname;
	std::string _login;
	std::string _postal_address;
	std::string _email_address;
	std::string _phone_number;
	std::string _birthday_date;
	std::string _favorite_meal;
	std::string _underwear_color;
	std::string _darkest_secret;

	public:
		Contact(void);
		~Contact(void);

		void clearContact(void);

		void setfirstname(std::string name);
		void setlastname(std::string name);
		void setnickname(std::string name);
		void setlogin(std::string name);
		void setpostaladdress(std::string name);
		void setemailaddress(std::string name);
		void setphonenumber(std::string name);
		void setbirthdaydate(std::string name);
		void setfavoritemeal(std::string name);
		void setunderwearcolor(std::string name);
		void setdarkestsecret(std::string name);

		std::string getfirstname(void) const;
		std::string getlastname(void) const;
		std::string getnickname(void) const;
		std::string getlogin(void) const;
		std::string getpostaladdress(void) const;
		std::string getemailaddress(void) const;
		std::string getphonenumber(void) const;
		std::string getbirthdaydate(void) const;
		std::string getfavoritemeal(void) const;
		std::string getunderwearcolor(void) const;
		std::string getdarkestsecret(void) const;
		
};

int add_contact(Contact list[8], int index);
int search_contact(Contact list[8], int index);
int recup_index_contact(int index);
void display_info_in_case(std::string info);

#endif