/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samantha <samantha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 13:50:52 by sle-huec          #+#    #+#             */
/*   Updated: 2022/11/08 16:16:56 by samantha         ###   ########.fr       */
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
	~PhoneBook();

	std::string get_handler_input(void)const;
	void set_handler_input(void);
	int exec_user_cmd();
	void print_contact();

private:
	int	_count_user;
	std::string _user_cmd;

	Contact _contacts_in_rep[8];
	
	void cmd_add();
	void search_cmd();
	void exit_cmd();
};

#endif