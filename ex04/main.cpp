/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlize <tlize@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 16:56:41 by tlize             #+#    #+#             */
/*   Updated: 2025/10/27 15:35:47 by tlize            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

bool	checkFilename(char *readName)
{
    std::ifstream file(readName);
	return (file.good());
}

void replaceAll(std::string &str, const char *old_sub, const char *new_sub)
{
    std::string old_s = old_sub;
    std::string new_s = new_sub;
    std::string result;
    size_t pos = 0;
    size_t found;

    while ((found = str.find(old_s, pos)) != std::string::npos)
    {
        result.append(str, pos, found - pos);
        result += new_s;
        pos = found + old_s.length();
    }
    result += str.substr(pos);
    str = result;
}

int main(int argc, char **argv)
{
	char *readName;
	
    if (argc != 4)
    {
        std::cout << "Wrong number of arguments" << std::endl;
        return (0);
    }
	readName = argv[1];
	if (!checkFilename(readName))
	{
	    std::cout << "File does not exist" << std::endl;
		return (0);
	}
    std::string writeName = ".replace";
    writeName = readName + writeName;
    std::ifstream readFile;
    std::ofstream writeFile;
    readFile.open (readName);
    writeFile.open (writeName.c_str());
    std::string lineRead;
    while (getline (readFile, lineRead))
    {
        replaceAll(lineRead, argv[2], argv[3]);
        writeFile << lineRead << std::endl;
    }
    readFile.close();
    writeFile.close();
    return (0);
} 