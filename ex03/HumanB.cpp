/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haarab <haarab@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 15:59:15 by haarab            #+#    #+#             */
/*   Updated: 2023/11/09 15:54:16 by haarab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string humanName) : name(humanName) {
};


void HumanB::attack()
{
    std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon & newWeapon)
{
	this->weapon = &newWeapon;
}

HumanB::~HumanB() {
	std::cout << this->name << " deconstructor called" << std::endl;
}