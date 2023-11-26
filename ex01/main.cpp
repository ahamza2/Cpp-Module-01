/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haarab <haarab@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 12:55:10 by haarab            #+#    #+#             */
/*   Updated: 2023/11/12 12:55:11 by haarab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main ()
{
    int numberZombie = 3;
    std::string zombiename = "ZombieName";
    Zombie *Zhorde = zombieHorde(numberZombie, zombiename);
    int i = 0;
    while (i < numberZombie)
    {
        Zhorde[i].announce();
        i++;
    }
    delete[] Zhorde;

    return (0);
}