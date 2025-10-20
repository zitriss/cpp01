/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlize <tlize@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 18:08:17 by tlize             #+#    #+#             */
/*   Updated: 2025/10/20 16:33:57 by tlize            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name){
    Zombie* ptr = static_cast<Zombie*>(std::malloc(N * sizeof(Zombie)));
    if (!ptr)
        return NULL;
    for (int i = 0; i < N; i++)
        new (&ptr[i]) Zombie(name);
    return ptr;
}

void freeHorde(Zombie *ptr, int N){
    for (int i = 0; i < N; i++)
        ptr[i].~Zombie();
    std::free(ptr);
}


