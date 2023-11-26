/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haarab <haarab@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 15:59:34 by haarab            #+#    #+#             */
/*   Updated: 2023/11/09 15:28:11 by haarab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(const std::string & weapon) : type(weapon) {
};


const std::string & Weapon::getType()
{
	return (type);
}

void Weapon::setType(std::string newType)
{
	this->type = newType;
}
