/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samantha <samantha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 15:39:26 by samantha          #+#    #+#             */
/*   Updated: 2022/11/06 21:54:00 by samantha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void){
	//here init var (voir videos THor)
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
	return this->_user_cmd;
}

void PhoneBook::set_handler_input(void)
{
	std::cout << "Contact handler: you can either type ADD, SEARCH or EXIT" << std::endl;
	std::getline(std::cin, _user_cmd);
}

void PhoneBook::add_cmd()
{
		if (this->count_user == 7)
			this->count_user = 0;
		this->count_user++;

		this->contacts_in_rep[this->count_user].set_name();
		this->contacts_in_rep[this->count_user].set_lastname();
		this->contacts_in_rep[this->count_user].set_surname();
		this->contacts_in_rep[this->count_user].set_phone_number();
		this->contacts_in_rep[this->count_user].set_darkest_secret();
}

void PhoneBook::exec_user_cmd()
{
	if (this->_user_cmd == "ADD")
		this->add_cmd();
	else if(this->_user_cmd == "SEARCH")
		std::cout << "SEARCH entered" << std::endl;
	else if (this->_user_cmd == "EXIT")
		std::cout << "EXIT entered" << std::endl;
	else
		std::cout << "only ADD or SEARCH or EXIT must be typed" << std::endl;
}
