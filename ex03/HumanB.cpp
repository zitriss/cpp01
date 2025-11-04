/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlize <tlize@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 17:32:21 by tlize             #+#    #+#             */
/*   Updated: 2025/11/04 15:24:55 by tlize            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string newName)
{
    this->name = newName;
	this->weaponHeld = NULL;
}

HumanB::~HumanB(void)
{
    std::cout << this->name << " deleted" << std::endl;
}

void    HumanB::setWeapon(Weapon& pWeapon)
{
    this->weaponHeld = &pWeapon;
}

void    HumanB::attack(void)
{
	if (this->weaponHeld== NULL)
		std::cout << this->name << " met une mandale de forrain " << std::endl;
	else
		std::cout << this->name << " attacks with their " << this->weaponHeld->getType() << std::endl;
}