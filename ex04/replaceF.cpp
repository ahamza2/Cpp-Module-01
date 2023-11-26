/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replaceF.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haarab <haarab@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 16:06:55 by haarab            #+#    #+#             */
/*   Updated: 2023/11/10 18:10:11 by haarab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replaceF.hpp"

ReplaceF::ReplaceF(){
	std::cout << "constructor called" << std::endl;
};

ReplaceF::ReplaceF(std::string filename) : infile(filename){
	std::cout << "constructor called" << std::endl;
	this->outfile = this->infile + ".replace";

};

std::string ReplaceF::getName()
{
	return (this->outfile);
}

void ReplaceF::replaceS(std::string s1, std::string str2, std::string str3)
{
	unsigned long position;
	ReplaceF repf(s1);
	std::ifstream input(s1);
	if (!input)
	{
		std::cerr << "Error: Cannot open input file " << std::endl;
		return ;
	}
	std::string line;
	std::ofstream file(repf.getName());
	while (std::getline(input, line))
	{
		position = 0;
		while (1)
		{
			position = line.find(str2, position);
			if (position == std::string::npos)
				break;
			line.erase(position, str2.length());
			line.insert(position, str3);
			position += str3.length();
		}
		file << line << std::endl;
	}
	input.close();
	file.close();
}

ReplaceF::~ReplaceF() {
	std::cout << "deconstructor called" << std::endl;
}
