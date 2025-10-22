/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlize <tlize@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 16:56:41 by tlize             #+#    #+#             */
/*   Updated: 2025/10/22 18:34:05 by tlize            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

bool	checkFilename(char *filename)
{
	std::string filenamestr = filename;
    std::ifstream file(filename);
	return (file.good());
}

int main(int argc, char **argv)
{
	char *filename;
	
    if (argc != 4)
    {
        std::cout << "Wrong number of arguments" << std::endl;
        return (0);        
    }
	filename = argv[1];
	if (!checkFilename(filename))
	{
	    std::cout << "File does not exist" << std::endl;
		return (0);	
	}
    std::ofstream test;
    test.open (filename);
    test.close();
    return (0);
}