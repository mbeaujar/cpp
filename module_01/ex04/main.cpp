/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbeaujar <mbeaujar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/23 23:25:26 by mbeaujar          #+#    #+#             */
/*   Updated: 2021/07/16 18:40:02 by mbeaujar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <cstdio>

int ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int main(int argc, char *argv[])
{
	if (argc != 4 || static_cast<std::string>(argv[2]) == "" || static_cast<std::string>(argv[3]) == "")
		return (1);
	std::ifstream file;
	file.open(argv[1]);
	if (!file)
	{
		std::cout << "Error : can't open the file in argument" << std::endl;
		return (1);
	}
	std::string replace = ".replace";
	std::string newfilename = argv[1] + replace;
	std::ofstream newfile(newfilename);
	std::string content;
	int len = ft_strlen(argv[2]);
	
	size_t pos;
	std::string newcontent;
	while (std::getline(file, content))
	{
		while ((pos = content.find(argv[2])) != std::string::npos)
		{
			newcontent = content.substr(0, pos);
			newcontent += argv[3];
			newcontent += content.substr(pos + len, content.length() - (pos + len));
			content = newcontent;
		}
		newfile << content << std::endl;
	}
	file.close();
	newfile.close();
	return (0);
}