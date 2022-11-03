/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sle-huec <sle-huec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 13:19:10 by sle-huec          #+#    #+#             */
/*   Updated: 2022/11/03 18:12:51 by sle-huec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <string>
#include <iostream>

Contact::Contact(void){
	return;
}

Contact::~Contact(void){
	return;
}

std::string Contact::set_name(void)
{
	std::cout << "Enter your name: " << std::endl;
	std::getline(std::cin, _name);
	std::cout << _name << std::endl;
	return _name;
}

std::string Contact::set_lastname(void)
{
	std::cout << "Enter your lastname: " << std::endl;
	std::getline(std::cin, _lastname);
	std::cout << _name << std::endl;
	return _lastname;
}

// std::string Contact::set_surname(void)
// {
	
// }

// std::string Contact::set_phone_number(void)
// {
	
// }

// std::string Contact::set_darkest_seccret(void)
// {
	
// }

std::string Contact::get_name(void)const
{
	return this->_name;
}

// void Contact::get_lastname(void){
	
// }

// void Contact::get_surname(void){
	
// }

// void Contact::get_phone_number(void){
	
// }

// void Contact::get_darkest_seccret(void){
// }


