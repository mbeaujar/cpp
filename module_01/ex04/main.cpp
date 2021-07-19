#include <iostream>
#include <fstream>

int main(int argc, char *argv[])
{
	std::string find;
	std::string replace;
	std::string line;
	std::string content = "";
	std::ifstream file;
	size_t 		pos;
	int 	len_find;

	if (argc != 4)
		return (1);
	find = argv[2];
	replace = argv[3];
	len_find = find.length();
	if (find == "" || replace == "")
		return (1);
	file.open(argv[1]);
	if (!file) {
		std::cout << "Error : can't open the file in argument" << std::endl;
		return (1);
	}
	line = argv[1] + static_cast<std::string>(".replace");
	std::ofstream newfile(line.data());
	while (std::getline(file, line))
	{
		content.append(line);
		if (!file.eof())
			content.append("\n");
	}
	if (find != replace) 
	{
		while ((pos = content.find(find)) != std::string::npos)
		{
			line = content.substr(0, pos);
			line += replace;
			line += content.substr(pos + len_find, content.length() - (pos + len_find));
			content = line;
		}
	}
	newfile << content;
	file.close();
	newfile.close();
	return (0);
}
