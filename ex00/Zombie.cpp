/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlize <tlize@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 16:38:25 by tlize             #+#    #+#             */
/*   Updated: 2025/10/21 16:08:07 by tlize            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
    this->name = name;
}

Zombie::~Zombie(void)
{
    std::cout << this->name << " deleted\n";
}

void	Zombie::announce(void) {
    std::cout << this->name << ": BraiiiiiiinnnzzzZ...\n";
}