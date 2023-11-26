/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haarab <haarab@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 15:59:19 by haarab            #+#    #+#             */
/*   Updated: 2023/11/09 15:54:33 by haarab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"
#include <iostream>


class HumanB
{
	private:
		std::string name;
		Weapon * weapon;
	public:
		HumanB(std::string humanName);
		void setWeapon(Weapon & weapon);
		void attack();
		~HumanB();
};


#endif