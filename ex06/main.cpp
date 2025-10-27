/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlize <tlize@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 17:15:01 by tlize             #+#    #+#             */
/*   Updated: 2025/10/27 17:57:33 by tlize            ###   ########.fr       */
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
			superHarl.complain("DEBUG");
    		superHarl.complain("INFO");
    		superHarl.complain("WARNING");
    		superHarl.complain("ERROR");
			break;
		case 1:
    		superHarl.complain("INFO");
    		superHarl.complain("WARNING");
    		superHarl.complain("ERROR");
			break;
		case 2:
    		superHarl.complain("WARNING");
    		superHarl.complain("ERROR");
			break;
		case 3:
    		superHarl.complain("ERROR");
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
}