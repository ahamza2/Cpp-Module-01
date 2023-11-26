/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haarab <haarab@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 15:08:25 by haarab            #+#    #+#             */
/*   Updated: 2023/11/19 15:08:26 by haarab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>


class Zombie
{
    private :
        std::string name;
    
    public :
        Zombie(std::string zombieName);
        void announce();
		~Zombie();
};

Zombie* newZombie( std::string name );
void randomChump(std::string name);

#endif