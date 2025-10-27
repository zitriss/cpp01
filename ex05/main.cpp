/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlize <tlize@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 15:52:52 by tlize             #+#    #+#             */
/*   Updated: 2025/10/27 16:51:08 by tlize            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(void)
{
    Harl superHarl;
    superHarl.complain("dingo");
    superHarl.complain("DEBUG");
    superHarl.complain("INFO");
    superHarl.complain("WARNING");
    superHarl.complain("ERROR");
}