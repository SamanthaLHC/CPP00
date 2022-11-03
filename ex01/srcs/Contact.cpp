/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samantha <samantha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 13:19:10 by sle-huec          #+#    #+#             */
/*   Updated: 2022/11/03 21:02:30 by samantha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <string>
#include <iostream>

// faire une methode qui prend une string en entrée et d afficher le message 
// qui va avec linput et d'apppeler le bon setter? 

Contact::Contact(void){
	return;
}

Contact::~Contact(void){
	return;
}

std::string Contact::get_name(void)const
{
	return this->_name;
}

std::string Contact::set_name(void)
{
	std::cout << "Enter your name: " << std::endl;
	std::getline(std::cin, _name);
	return _name;
}

std::string Contact::get_lastname(void)const
{
	return this->_lastname;
}

std::string Contact::set_lastname(void)
{
	std::cout << "Enter your lastname: " << std::endl;
	std::getline(std::cin, _lastname);
	return _lastname;
}


std::string Contact::get_surname(void)const
{
	return this->_surname;
}

std::string Contact::set_surname(void)
{
	std::cout << "Enter your surname: " << std::endl;
	std::getline(std::cin, _surname);
	return _surname;
}

std::string Contact::get_phone_number(void)const
{
	return this->_phone_number;
}

std::string Contact::set_phone_number(void)
{
	std::cout << "Enter your phone number: " << std::endl;
	std::getline(std::cin, _phone_number);
	return _phone_number;
}

std::string Contact::get_darkest_secret(void)const
{
	return this->_dark_secret;
}

std::string Contact::set_darkest_secret(void)
{
	std::cout << "What is your darkest secret? " << std::endl;
	std::getline(std::cin, _dark_secret);
	return _dark_secret;
}
