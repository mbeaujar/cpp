/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbeaujar <mbeaujar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/23 23:25:26 by mbeaujar          #+#    #+#             */
/*   Updated: 2021/07/04 15:08:13 by mbeaujar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <cstdio>

int main(int argc, char *argv[])
{
	if (argc != 4)
		return (1);
	std::ifstream file;
	std::string replace = ".replace";
	std::string newfilename = argv[1] + replace;
	std::ofstream newfile(newfilename);
	std::string content;
	
	file.open(argv[1]);
	if (!file)
	{
		std::cout << "Error : can't open the file in argument" << std::endl;
		return (1);
	}
	size_t pos;
	while (std::getline(file, content))
	{
		while ((pos = content.find(argv[2])) != std::string::npos) {
			content.replace(pos, sizeof(argv[2]), argv[3]);
		}
		newfile << content << std::endl;
	}
	file.close();
	//remove(argv[1]);
	//std::rename(newfilename, argv[1]);
	newfile.close();
	return (0);
}