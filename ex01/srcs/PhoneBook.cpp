/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sle-huec <sle-huec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 15:39:26 by samantha          #+#    #+#             */
/*   Updated: 2022/11/02 15:51:44 by sle-huec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void){

	//initialiser les var grace au mot clé "this"
	//un ptr qui pointe sur l'instance actuelle
	//this->var = 0;
	// this permet d'appeler une fonction membre de l instance courante
	// pour constituer le repertoire, voir l initialization list pour changer
	// les donnees des contact
	//class(int const n)
	// void fonction(void)const; une fonction membre qui ne modifie pas 
	// l'instance courante de notre classe, il faut la déclarer en const
	
	std::cout << "pouet pouet" << std::endl;
	return;
}

// void	PhoneBook::get_info_contact() const {
	
// 	// here input user ? 
// }

PhoneBook::~PhoneBook(void){
	std::cout << "finito" << std::endl;
	return;
}