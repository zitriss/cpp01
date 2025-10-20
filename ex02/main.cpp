/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlize <tlize@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 16:46:41 by tlize             #+#    #+#             */
/*   Updated: 2025/10/20 17:04:40 by tlize            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void){
    std::string brain = "HI THIS IS BRAIN";
    std::string *pbrain = &brain;
    std::string& rbrain = brain;

    std::cout << &brain << "\n";
    std::cout << pbrain << "\n";
    std::cout << &rbrain << "\n";

    std::cout << brain << "\n";
    std::cout << *pbrain << "\n";
    std::cout << rbrain << "\n";
}