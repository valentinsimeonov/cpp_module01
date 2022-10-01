#include <iostream>
#include <fstream>
#include <string>
#include <vector>
// #include <strstream>

int	main(int argc, char **argv)
{
	std::string 	s1;
	std::string 	s2;
	std::string 	temp;
	std::ifstream 	ifs;
	std::ofstream 	outfile("copy.txt");
	std::size_t 	found;
	std::string::iterator it;

	if (argc != 4)
	{
		std::cout << "Not enough arguments, please provide 4 arguments" << std::endl;
		return (-1);
	}
	ifs.open(argv[1]);
	if (ifs.good())
	{
		s1 = argv[2];
		s2 = argv[3];
	}
	else
	{
		std::cout << "Could not Open File: " << argv[1] << std::endl;
		return (1);
	}
	if (s1.length() == 0)
		std::cout << "Please provide the First Argument" << std::endl; 
	if (!outfile.good())
	{
		std::cout << "Could not Create the Outfile" << std::endl;
		return (-1);
	}
	while (std::getline(ifs, temp))
	{
		while ((found = temp.find(s1)) != std::string::npos)
		{
			temp.erase(found, s1.length());
			temp.insert(found, s2);
		}
		outfile << temp << std::endl;
	}
	ifs.close();
	outfile.close();
	return (0);
}
