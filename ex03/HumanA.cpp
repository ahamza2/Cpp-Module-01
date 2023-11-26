/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haarab <haarab@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 15:59:03 by haarab            #+#    #+#             */
/*   Updated: 2023/11/09 15:55:09 by haarab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string humanName, Weapon & initialWeapon) : name(humanName), weapon(initialWeapon) {
}

void HumanA::attack()
{
    std::cout << this->name << " attacks with their " << this->weapon.getType() << std::endl;
}

HumanA::~HumanA() {
	std::cout << this->name << " deconstructor called" << std::endl;
}