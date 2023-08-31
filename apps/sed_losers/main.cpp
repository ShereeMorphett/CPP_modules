/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorphet <smorphet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 13:27:23 by smorphet          #+#    #+#             */
/*   Updated: 2023/08/31 15:56:48 by smorphet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

/*
Create a program that takes three parameters in the following order: a filename and
two strings, s1 and s2.
It will open the file <filename> and copies its content into a new file
<filename>.replace, replacing every occurrence of s1 with s2.
Using C file manipulation functions is forbidden and will be considered cheating. All
the member functions of the class std::string are allowed, except replace. Use them
wisely!
Of course, handle unexpected inputs and errors. You have to create and turn in your
own tests to ensure your program works as expected
*/


static std::string processInFile(char *fileName)
{
	std::ifstream	ogFile;
	std::string 			ogFileCopy;
	char			ch;

	ogFile.open(fileName);
	
	if (ogFile.fail())
	{
		std::cout << "Error opening file" << std::endl;
		return (NULL);
	}
	
	std::cout << ogFileCopy << std::endl; //
	
	while(!ogFile.eof() && ogFile >> std::noskipws >> ch)
		ogFileCopy += ch;

	ogFile.close();
	
	return ogFileCopy;

}


static  int createOutFile(const std::string& fileName, const std::string& replacedContent)
{
    std::ofstream outFile;
    
	outFile.open(fileName);
	if (outFile.fail())
        return 1; 

    outFile << replacedContent;
    outFile.close();
    return 0;
}


static std::string replaceWords(const std::string& input, const std::string& toFind, const std::string& replacement)
{
    std::string result;
    int pos = 0;

    while (pos < input.size())
	{
        int foundPos = input.find(toFind, pos);
        
		if (foundPos != std::string::npos)
		{
            result += input.substr(pos, foundPos - pos);
            result += replacement;
            pos = foundPos + toFind.size();
        }
		else
		{
            result += input.substr(pos);
            pos = input.size();
        }
    }
	
    return result;
}

int main(int argc, char **argv)
{
    if (argc != 4) {
        std::cout << "<file name> <word to be replaced> <new word>" << std::endl;
        return 1;
    }

    std::string ogFileCopy = processInFile(argv[1]);

    if (ogFileCopy.empty()) {
        std::cout << "Error processing input file." << std::endl;
        return 1;
    }

    std::string replacedContent = replaceWords(ogFileCopy, argv[2], argv[3]);
	
    if (createOutFile(std::string(argv[1]) + ".replace", replacedContent) != 0) {
        std::cout << "Error with outfile." << std::endl;
        return 1;
    }

    std::cout << "File created and content replaced successfully......in theory?" << std::endl;
    return 0;
}
