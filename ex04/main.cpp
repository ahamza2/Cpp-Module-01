/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haarab <haarab@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 16:05:58 by haarab            #+#    #+#             */
/*   Updated: 2023/11/24 14:10:19 by haarab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replaceF.hpp"

int main (int ac, char **av)
{
	if (ac != 4)
	{
		std::cerr << "Usage: <filename> <s1> <s2>" << std::endl;
        return EXIT_FAILURE;
	}
	else
	{
		std::string filename = av[1];
		std::string str2 = av[2];
		std::string str3 = av[3];
		ReplaceF repf;
		repf.replaceS(filename, str2, str3);
	}
	return 0;
}
