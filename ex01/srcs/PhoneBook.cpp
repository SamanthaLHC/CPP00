/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sle-huec <sle-huec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 15:39:26 by samantha          #+#    #+#             */
/*   Updated: 2022/11/07 14:24:35 by sle-huec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"
#include <stdlib.h>

PhoneBook::PhoneBook(void){
	//here init var (voir videos THor)
	return;
}

PhoneBook::~PhoneBook(void){
	return;
}

//==============================================================================
//           handler input
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

//==============================================================================
//           cmd add
//==============================================================================

void PhoneBook::cmd_add()
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

//==============================================================================
//           user's actions execution
//==============================================================================

void PhoneBook::exec_user_cmd()
{
	if (this->_user_cmd == "ADD")
		this->cmd_add();
	else if(this->_user_cmd == "SEARCH")
		std::cout << "SEARCH entered" << std::endl;
	else if (this->_user_cmd == "EXIT")
	{
		std::cout << "All contacts will be lost." << std::endl;		
		exit(0);
	}
	else
		std::cout << "only ADD, SEARCH or EXIT must be typed" << std::endl;
}
