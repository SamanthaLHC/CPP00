/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sle-huec <sle-huec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 13:19:10 by sle-huec          #+#    #+#             */
/*   Updated: 2022/11/07 15:54:07 by sle-huec         ###   ########.fr       */
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

//==============================================================================
//           name
//==============================================================================

std::string Contact::get_name(void)const
{
	return this->_name;
}

void Contact::set_name(void)
{
	while (this->_name.length() == 0)
	{
		std::cout << "Enter your name: " << std::endl;		
		std::getline(std::cin, _name);
	}
}

//==============================================================================
//           lastname
//==============================================================================

std::string Contact::get_lastname(void)const
{
	return this->_lastname;
}

void Contact::set_lastname(void)
{
	while (this->_lastname.length() == 0)
	{
		std::cout << "Enter your lastname: " << std::endl;
		std::getline(std::cin, _lastname);
	}
}

//==============================================================================
//           surname
//==============================================================================

std::string Contact::get_surname(void)const
{
	return this->_surname;
}

void Contact::set_surname(void)
{
	while (this->_surname.length() == 0)
	{
		std::cout << "Enter your surname: " << std::endl;
		std::getline(std::cin, _surname);
	}
}

//==============================================================================
//           phone_number
//==============================================================================

std::string Contact::get_phone_number(void)const
{
	return this->_phone_number;
}

void Contact::set_phone_number(void)
{
	while (this->_phone_number.length() == 0)
	{	
		std::cout << "Enter your phone number: " << std::endl;
		std::getline(std::cin, _phone_number);
	}
}

//==============================================================================
//           darkest_secret
//==============================================================================

std::string Contact::get_darkest_secret(void)const
{
	return this->_dark_secret;
}

void Contact::set_darkest_secret(void)
{
	while (this->_dark_secret.length() == 0)
	{
		std::cout << "What is your darkest secret? " << std::endl;
		std::getline(std::cin, _dark_secret);
	}
}
