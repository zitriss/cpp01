/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlize <tlize@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 17:15:01 by tlize             #+#    #+#             */
/*   Updated: 2025/10/30 18:30:16 by tlize            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char **argv)
{
    if (argc != 2)
    {
		std::cout << "Wrong number of argument" << std::endl;
        return (0);   
    }
	std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int c = -1;
	std::string strArgv = argv[1];
	for (int i = 0; i < 4; i++)
	{
		if(levels[i] == strArgv)
		{
			c = i;
			break;
		}
	}
	Harl superHarl;
	switch (c)
	{
		case 0:
			std::cout << "[DEBUG]" << std::endl;
			superHarl.complain("DEBUG");
		case 1:
			std::cout << "[INFO]" << std::endl;
    		superHarl.complain("INFO");
		case 2:
			std::cout << "[WARNING]" << std::endl;
    		superHarl.complain("WARNING");
		case 3:
			std::cout << "[ERROR]" << std::endl;
    		superHarl.complain("ERROR");
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
}