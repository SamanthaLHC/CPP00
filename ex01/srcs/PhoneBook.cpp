/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sle-huec <sle-huec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 15:39:26 by samantha          #+#    #+#             */
/*   Updated: 2022/11/04 17:59:23 by sle-huec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void){	
	return;
}

PhoneBook::~PhoneBook(void){
	return;
}

//==============================================================================
//           handle user choice (ADD, SEARCH, EXIT)
//==============================================================================

std::string PhoneBook::get_handler_input(void)const
{
	return this->_user_input_browse;
}

void PhoneBook::set_handler_input(void)
{
	std::cout << "Contact handler: you can either type ADD, SEARCH or EXIT" << std::endl;
	std::getline(std::cin, _user_input_browse);
}

void PhoneBook::identify_user_choice()
{
	if (this->_user_input_browse == "ADD")
	{
		if (this->count_user == 8)
			this->count_user = 0;
		this->count_user++;
		
		Contact contacts_in_rep[this->count_user];
		contacts_in_rep[this->count_user].set_name();
		contacts_in_rep[this->count_user].set_lastname();
		contacts_in_rep[this->count_user].set_surname();
		contacts_in_rep[this->count_user].set_phone_number();
		contacts_in_rep[this->count_user].set_darkest_secret();
	}
	else if(this->_user_input_browse == "SEARCH")
		std::cout << "SEARCH entered" << std::endl;
	else if (this->_user_input_browse == "EXIT")
		std::cout << "EXIT entered" << std::endl;
	else
		std::cout << "only ADD or SEARCH or EXIt must be typed" << std::endl;
}
