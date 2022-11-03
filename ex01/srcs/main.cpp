/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samantha <samantha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 14:02:02 by sle-huec          #+#    #+#             */
/*   Updated: 2022/11/03 21:05:05 by samantha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

int	main()
{
	// PhoneBook repertoire;
	Contact contact;
	contact.set_name();
	std::cout << contact.get_name() << std::endl;
	contact.set_lastname();
	std::cout << contact.get_lastname() << std::endl;
	contact.set_surname();
	std::cout << contact.get_surname() << std::endl;
	contact.set_phone_number();
	std::cout << contact.get_phone_number() << std::endl;
	contact.set_darkest_secret();
	std::cout << contact.get_darkest_secret() << std::endl;

	return 0;
}