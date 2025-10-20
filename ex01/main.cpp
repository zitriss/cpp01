/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlize <tlize@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 17:56:05 by tlize             #+#    #+#             */
/*   Updated: 2025/10/20 16:37:53 by tlize            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void){
	int n = 5;
	Zombie* tsunami = zombieHorde(n, "Graouhman");
	for (int i = 0; i < n; i++)
        tsunami[i].announce();
    freeHorde(tsunami, n);
}