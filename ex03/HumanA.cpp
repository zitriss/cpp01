/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlize <tlize@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 18:32:18 by tlize             #+#    #+#             */
/*   Updated: 2025/10/22 16:23:03 by tlize            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string newName, Weapon& rWeapon) : weaponHeld(rWeapon)
{
    this->name = newName;
}

HumanA::~HumanA(void)
{
    std::cout << this->name << " deleted" << std::endl;
}

void    HumanA::setWeapon(Weapon rWeapon)
{
    this->weaponHeld = rWeapon;
}

void    HumanA::attack(void)
{
    std::cout << this->name << " attacks with their " << this->weaponHeld.getType() << std::endl;
}