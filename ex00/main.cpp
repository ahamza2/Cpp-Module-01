/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haarab <haarab@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 15:07:23 by haarab            #+#    #+#             */
/*   Updated: 2023/11/19 15:07:24 by haarab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main ()
{
	Zombie *newZ = newZombie("hamza");
	newZ->announce();
	randomChump("1337");
    randomChump("42 Network");
	delete newZ;
    return 0;
}