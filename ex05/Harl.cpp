/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haarab <haarab@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 16:02:23 by haarab            #+#    #+#             */
/*   Updated: 2023/11/10 18:03:29 by haarab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug( void )
{
	std::cout << "DEBUG: I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void Harl::info( void )
{
	std::cout << "INFO: I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
}

void Harl::warning( void )
{
	std::cout << "WARNING: I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error( void )
{
	std::cout << "ERROR: This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string level)
{
	void (Harl::*ComplaintFunction[4])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
		
	std::string str[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int i = 0;
	while (i < 4)
	{
		if (level == str[i])
			(this->*ComplaintFunction[i])();
		i++;
	}
}