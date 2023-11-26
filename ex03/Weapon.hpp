/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haarab <haarab@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 15:59:40 by haarab            #+#    #+#             */
/*   Updated: 2023/10/16 23:45:41 by haarab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>


class Weapon
{
	private:
		std::string type;
	public:
		Weapon(const std::string & weapon);
		const std::string & getType();
		void setType(std::string newType);
};

#endif