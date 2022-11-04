/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sle-huec <sle-huec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 13:50:52 by sle-huec          #+#    #+#             */
/*   Updated: 2022/11/04 17:55:11 by sle-huec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

#include <iostream>
#include <string>

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

class PhoneBook {
	
public:

	PhoneBook(void);
	// here initialiser les attribut
	~PhoneBook();

	void set_handler_input(void);
	std::string get_handler_input(void)const;
	
	void set_add(void);
	std::string get_add(void)const;
		
	void set_search(void);
	std::string get_search(void)const;
	
	void set_exit(void);
	std::string get_exit(void)const;

	void identify_user_choice();
	
private:

	Contact contacts_in_rep[8];
	int	count_user;
	std::string _user_input_browse;
};

#endif