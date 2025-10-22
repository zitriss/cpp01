/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlize <tlize@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 15:50:59 by tlize             #+#    #+#             */
/*   Updated: 2025/10/22 15:51:58 by tlize            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>

class Weapon
{
public:
	Weapon(std::string newType);
	~Weapon(void);
    const std::string	getType(void);
    void				setType(std::string newType);
private:
    std::string type;
};

#endif