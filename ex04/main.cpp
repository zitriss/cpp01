/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlize <tlize@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 16:56:41 by tlize             #+#    #+#             */
/*   Updated: 2025/10/22 18:10:24 by tlize            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int	checkFilename(std::string& filename){
    
}

int main(int argc, char **argv) {
    if (argc != 4)
    {
        std::cout << "wrong number of arguments" << std::endl;
        return (0);        
    }
	std::string filename = argv[1];
    std::ofstream test;
    test.open (filename);
    test.close();
    return (0);
}