#include <iostream>
#include <fstream>
#include <string>

std::string replace_all_occurrences(const std::string &line, const std::string &s1, const std::string &s2)
{
	std::string modifiedLine = line;
	size_t pos = 0;

	if (s1.size() == 0)
	return line;
	while (true)
	{
		pos = modifiedLine.find(s1, pos);
		if (pos == std::string::npos)
			break;

		modifiedLine = modifiedLine.substr(0, pos) + s2 + modifiedLine.substr(pos + s1.length());
		pos += s2.length();
	}

	return modifiedLine;
}

int main(int argc, char *argv[])
{
	std::string filename;
	std::string s1;
	std::string s2;
	std::string newFileName;

	if (argc != 4)
	{
		std::cerr << "Usage: " << argv[0] << " <filename> <s1> <s2>" << std::endl;
		return (1);
	}
	filename = argv[1];
	s1 = argv[2];
	s2 = argv[3];

	std::ifstream inputFile(filename.c_str()); // opening file
	if (!inputFile)
		std::cout << "Failed to open file: " << filename << std::endl;

	newFileName = filename + ".replace";
	std::ofstream outputFile(newFileName.c_str()); // writing in file
	if (!outputFile)
	{
		std::cerr << "Error creating file: " << newFileName << std::endl;
		inputFile.close();
		return (1);
	}

	std::string line;
	while (std::getline(inputFile, line))
	{
		outputFile << replace_all_occurrences(line, s1, s2) << std::endl;
	}
	inputFile.close();
	outputFile.close();
	return (0);
}
