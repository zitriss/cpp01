/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlize <tlize@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 16:56:41 by tlize             #+#    #+#             */
/*   Updated: 2025/10/27 15:41:40 by tlize            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

bool	checkFilename(char *readName)
{
    std::ifstream file(readName);
	return (file.good());
}

void replaceAll(std::string &str, const char *oldSub, const char *newSub)
{
    std::string strOldSub = oldSub;
    std::string strNewSub = newSub;
    std::string result;
    size_t pos = 0;
    size_t found;

    while ((found = str.find(strOldSub, pos)) != std::string::npos)
    {
        result.append(str, pos, found - pos);
        result += strNewSub;
        pos = found + strOldSub.length();
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