/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sle-huec <sle-huec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 15:39:26 by samantha          #+#    #+#             */
/*   Updated: 2022/11/11 14:31:16 by sle-huec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include "PhoneBook.hpp"


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
	std::cout << "\033[1;33mContact handler: you can either type ADD, SEARCH or EXIT\033[0m" << std::endl;
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
		this->_contacts_in_rep[this->_count_user].set_lastname();
		this->_contacts_in_rep[this->_count_user].set_surname();
		this->_contacts_in_rep[this->_count_user].set_phone_number();
		this->_contacts_in_rep[this->_count_user].set_darkest_secret();
		
		this->_count_user++;
}

//==============================================================================
//           cmd search
//==============================================================================

void PhoneBook::cmd_search()
{
		int idx_input;
		std::cout << "\033[1;33mEnter the contact's number you want to display:\033[0m" << std::endl;
		std::cin >> idx_input;
		std::cout << this->_contacts_in_rep[idx_input].get_name() << std::endl;
		std::cout << this->_contacts_in_rep[idx_input].get_lastname() << std::endl;
		std::cout << this->_contacts_in_rep[idx_input].get_surname() << std::endl;
		std::cout << this->_contacts_in_rep[idx_input].get_phone_number()<< std::endl;
		std::cout << this->_contacts_in_rep[idx_input].get_darkest_secret() << std::endl;
}

//==============================================================================
//          print contact
//==============================================================================

void PhoneBook::print_contact()
{
	for (int i = 0; i < this->_count_user; i++)
	{		
		std::cout << std::setw(10) << i + 1 << std::setfill(' ') << "|";
		if (this->_contacts_in_rep[i].get_name().length() > 10)
			std::cout << "pouet pouet à resize";
		else
			std::cout << std::setw(10) << this->_contacts_in_rep[i].get_name() << std::setfill(' ') << "|";
		if (this->_contacts_in_rep[i].get_lastname().length() > 10)
			std::cout << "pouet pouet à resize";
		else
			std::cout << std::setw(10) << this->_contacts_in_rep[i].get_lastname() << std::setfill(' ') << "|";
		if (this->_contacts_in_rep[i].get_surname().length() > 10)
			std::cout << "pouet pouet à resize";
		else
			std::cout << std::setw(10) << this->_contacts_in_rep[i].get_surname() << std::setfill(' ') << "|"
		 << std::endl;
	}
}

//==============================================================================
//           user's actions execution
//==============================================================================

int PhoneBook::exec_user_cmd()
{
	if (this->_user_cmd == "ADD")
		this->cmd_add();
	else if(this->_user_cmd == "SEARCH")
	{
		print_contact();
		cmd_search();
	}
	else if (this->_user_cmd == "EXIT" || std::cin.eof() == true)
	{
		std::cout << "\033[1;33mAll contacts will be lost.\033[0m" << std::endl;
		return -1;
	}
	else
		std::cout << "\033[1;31monly ADD, SEARCH or EXIT must be typed\033[0m" << std::endl;
	return 0;
}
