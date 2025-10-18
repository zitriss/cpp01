/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlize <tlize@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 16:38:28 by tlize             #+#    #+#             */
/*   Updated: 2025/10/18 18:04:33 by tlize            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie
{
public:
    Zombie(std::string name);
    ~Zombie(void);
    void    announce(void);
private:
    std::string name;
};

void	randomChump(std::string name);
Zombie*   newZombie(std::string name);

#endif