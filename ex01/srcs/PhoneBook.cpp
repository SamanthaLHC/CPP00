/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sle-huec <sle-huec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 15:39:26 by samantha          #+#    #+#             */
/*   Updated: 2022/11/04 15:10:48 by sle-huec         ###   ########.fr       */
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


