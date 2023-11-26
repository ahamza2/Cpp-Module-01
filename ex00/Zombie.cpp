/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haarab <haarab@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 15:08:10 by haarab            #+#    #+#             */
/*   Updated: 2023/11/19 15:13:33 by haarab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string zombieName) : name(zombieName) {
	std::cout << name << " : call constract" << std::endl;
}

void Zombie::announce()
{
    std::cout << name << " : BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie() {
	std::cout << name << " : deconstructor called" << std::endl;
}