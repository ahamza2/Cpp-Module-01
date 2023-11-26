/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haarab <haarab@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 15:14:15 by haarab            #+#    #+#             */
/*   Updated: 2023/10/16 15:44:09 by haarab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main ()
{
	std::string str = "HI THIS IS BRAIN";
	std::string * stringPTR = &str;
	std::string & stringREF = str;

	std::cout << & str << std::endl;
	std::cout << stringPTR << std::endl;
	std::cout << & stringREF << std::endl << std::endl;

	std::cout << str << std::endl;
	std::cout << * stringPTR << std::endl;
	std::cout << stringREF << std::endl;
}