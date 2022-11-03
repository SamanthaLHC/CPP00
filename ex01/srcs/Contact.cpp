/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sle-huec <sle-huec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 13:19:10 by sle-huec          #+#    #+#             */
/*   Updated: 2022/11/03 16:35:12 by sle-huec         ###   ########.fr       */
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

std::string Contact::get_name(void) const
{
	std::cout << "Enter your name: " << std::endl;
	std::getline(std::cin, _name);
	std::cout << _name << std::endl;
	return _name;
}
// std::string Contact::get_lastname(void) const{
	
// }

// std::string Contact::get_surname(void) const{
	
// }

// std::string Contact::get_phone_number(void) const{
// }

// std::string Contact::get_darkest_seccret(void) const{
	
// }

// void Contact::set_name(void){
	
// }

// void Contact::set_lastname(void){
	
// }

// void Contact::set_surname(void){
	
// }

// void Contact::set_phone_number(void){
	
// }

// void Contact::set_darkest_seccret(void){
// }


