/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlize <tlize@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 16:00:16 by tlize             #+#    #+#             */
/*   Updated: 2025/10/22 15:53:36 by tlize            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string newType)
{
    this->type= newType;
}
Weapon::~Weapon(void){
    
}

void    Weapon::setType(std::string newType){
    this->type = newType;
}

const std::string Weapon::getType(void){
    return (this->type);
}