#include <iostream>
#include <iostream>
#include <fstream>
#include <string>
#include <cstring>

int find_and_replace(std::string sourceFile, std::string outputFile, std::string find, std::string replace)
{
	std::ifstream			input(sourceFile);
	std::string				lineBuffer;
	std::string::size_type	n;

	if (input.fail())
	{
		std::cout << "Cannot open " << sourceFile << std::endl;
		return (1);
	}
	std::ofstream output(outputFile);
	if (output.fail())
	{
		std::cout << "Cannot create output file, check rights of current folder" << std::endl;
		return (1);
	}
	while (std::getline(input, lineBuffer))
    {
		n = lineBuffer.find(find);
		while (n != std::string::npos)
        {
            lineBuffer.replace(n, find.size(), replace);
			n = lineBuffer.find(find, n + replace.size());
        }
        output << lineBuffer;
		if (lineBuffer.size() > 0)
	        output << std::endl;
    }
    input.close();
    output.close();
	return (0);
}

int main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "Error ! Usage: ./replace <file> <find> <replace>" << std::endl;
		return (2);
	}
	if (!strlen(argv[2]) || !strlen(argv[3]))
	{
		std::cout << "Error: strings shouldn't be empty" << std::endl;
		return (2);
	}
	return (find_and_replace(argv[1], std::string(argv[1]) + std::string(".replace"), argv[2], argv[3]));
}
