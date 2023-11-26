/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haarab <haarab@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 15:59:10 by haarab            #+#    #+#             */
/*   Updated: 2023/11/09 14:58:00 by haarab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"
#include <iostream>


class HumanA
{
	private:
		std::string name;
		Weapon & weapon;
	public:
		HumanA(std::string humanName, Weapon & initialWeapon);
		void attack();
		~HumanA();
};

#endif