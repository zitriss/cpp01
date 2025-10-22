/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlize <tlize@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 18:32:23 by tlize             #+#    #+#             */
/*   Updated: 2025/10/22 16:14:46 by tlize            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_CPP
# define HUMANA_CPP

#include "Weapon.hpp"

class HumanA
{
public:
    HumanA(std::string, Weapon& rWeapon);
    ~HumanA();
    void    setWeapon(Weapon rWeapon);
    void    attack(void);
private:
    std::string name;
    Weapon& weaponHeld;
};

#endif