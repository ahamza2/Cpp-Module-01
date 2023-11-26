/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haarab <haarab@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 12:55:01 by haarab            #+#    #+#             */
/*   Updated: 2023/11/12 12:55:04 by haarab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() : name() {
	std::cout << "call constract" << std::endl;
}

void Zombie::setName(std::string name)
{
   this->name = name;
}

void Zombie::announce()
{
    std::cout << name << " : BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie() {
	std::cout << name << " : deconstructor called" << std::endl;
}