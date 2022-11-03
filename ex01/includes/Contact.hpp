/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sle-huec <sle-huec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 13:14:31 by sle-huec          #+#    #+#             */
/*   Updated: 2022/11/03 17:48:21 by sle-huec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

#ifndef CONTACT_H
# define CONTACT_H

class Contact{

public:
	Contact(void);
	~Contact();

	std::string get_name(void);
	std::string get_lastname(void);
	std::string get_surname(void);
	std::string get_phone_number(void);
	std::string get_darkest_seccret(void);

	void set_name(void);
	void set_lastname(void);
	void set_surname(void);
	void set_phone_number(void);
	void set_darkest_seccret(void);

// void set_contact(void);

private:
	std::string _name;
	std::string _lastname;
	std::string _surname;
	std::string _phone_number;
	std::string _dark_secret;
};

#endif