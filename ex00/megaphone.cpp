/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samantha <samantha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 12:06:08 by sle-huec          #+#    #+#             */
/*   Updated: 2022/11/01 11:56:06 by samantha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ctype.h>
#include <stdio.h>
#include <string>

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		std::string Arg;
		// for (int i = 0; av[1][i] != '\0'; i++)
		// {
		// 	std::cout << toupper(av[1][i]);
		// 	// std::endl;
		// }
		// return 0;
	}
	else
	{
		std::cout << "Need one str as arg." << std::endl;
		return 1;
	}	
}