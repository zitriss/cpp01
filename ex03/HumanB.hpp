/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlize <tlize@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 17:58:22 by tlize             #+#    #+#             */
/*   Updated: 2025/10/22 16:22:00 by tlize            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_CPP
# define HUMANB_CPP

#include "Weapon.hpp"

class HumanB
{
public:
    HumanB(std::string newName);
    ~HumanB();
    void    setWeapon(Weapon& pWeapon);
    void    attack(void);
private:
    std::string name;
    Weapon *weaponHeld;
};

#endif