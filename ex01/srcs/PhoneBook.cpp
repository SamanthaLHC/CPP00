/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sle-huec <sle-huec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 15:39:26 by samantha          #+#    #+#             */
/*   Updated: 2022/11/09 15:45:55 by sle-huec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"
#include <stdlib.h>

PhoneBook::PhoneBook(void): _count_user(0), _user_cmd(""){
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
		if (this->_count_user == 3)
			this->_count_user = 0;

		this->_contacts_in_rep[this->_count_user].set_name();
		// this->_contacts_in_rep[this->_count_user].set_lastname();
		// this->_contacts_in_rep[this->_count_user].set_surname();
		// this->_contacts_in_rep[this->_count_user].set_phone_number();
		// this->_contacts_in_rep[this->_count_user].set_darkest_secret();
		
		this->_count_user++;
}

//==============================================================================
//           cmd search
//==============================================================================

// void PhoneBook::cmd_search()
// {
	
// }


//==============================================================================
//           user's actions execution
//==============================================================================

int PhoneBook::exec_user_cmd()
{
	if (this->_user_cmd == "ADD")
		this->cmd_add();
	else if(this->_user_cmd == "SEARCH")
	{
		std::cout << "SEARCH entered" << std::endl;
		print_contact();
	}
	else if (this->_user_cmd == "EXIT" || std::cin.eof() == true)
	{
		std::cout << "All contacts will be lost." << std::endl;
		return -1;
	}
	else
		std::cout << "only ADD, SEARCH or EXIT must be typed" << std::endl;
	return 0;
}

//==============================================================================
//          clear contact
//==============================================================================

void PhoneBook::clear_contact(std::string field_contact)
{
	field_contact = "";
}

//==============================================================================
//          print contact
//==============================================================================

void PhoneBook::print_contact()
{
	for (int i = 0; i < this->_count_user; i++)
	{		
		std::cout << i + 1 << this->_contacts_in_rep[i].get_name() <<
		this->_contacts_in_rep[i].get_lastname()
		<< this->_contacts_in_rep[i].get_surname() << std::endl;
	}
}