/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replaceF.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haarab <haarab@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 16:07:09 by haarab            #+#    #+#             */
/*   Updated: 2023/11/09 21:02:25 by haarab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPLACEF_HPP
# define REPLACEF_HPP

#include <iostream>
#include <fstream>

class ReplaceF
{
	private:
	std::string infile;
	std::string outfile;

	public:
	ReplaceF();
	ReplaceF(std::string filename);
	void replaceS(std::string s1, std::string s2, std::string s3);
	std::string getName();
	~ReplaceF();
};


#endif