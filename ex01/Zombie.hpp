/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlize <tlize@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 16:38:28 by tlize             #+#    #+#             */
/*   Updated: 2025/10/20 16:30:53 by tlize            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <cstdlib>

class Zombie
{
public:
    Zombie(std::string name);
    ~Zombie(void);
    void    announce(void);
private:
    std::string name;
};

Zombie* zombieHorde(int N, std::string name);
void freeHorde(Zombie *ptr, int N);

#endif