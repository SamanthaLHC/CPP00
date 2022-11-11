/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sle-huec <sle-huec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 14:02:02 by sle-huec          #+#    #+#             */
/*   Updated: 2022/11/11 18:27:01 by sle-huec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <stdlib.h>

int	main()
{
	PhoneBook repertoire;

	while (1 && std::cin.eof() == false)
	{
		repertoire.set_handler_input();
		if (repertoire.exec_user_cmd() < 0)
			return 0;
	}
	return 0;
}
