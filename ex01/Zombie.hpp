/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haarab <haarab@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 12:55:33 by haarab            #+#    #+#             */
/*   Updated: 2023/11/12 12:55:35 by haarab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie
{
    public :
        Zombie();
        // Zombie(std::string name);
        void announce();
        void setName(std::string name);
		~Zombie();
    private :
        std::string name;

    
};

Zombie* zombieHorde(int N, std::string name);

#endif