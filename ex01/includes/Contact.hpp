/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sle-huec <sle-huec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 13:14:31 by sle-huec          #+#    #+#             */
/*   Updated: 2022/11/03 15:50:46 by sle-huec         ###   ########.fr       */
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

	std::string get_name(void) const;
	std::string get_lastname(void) const;
	std::string get_surname(void) const;
	std::string get_phone_number(void) const;
	std::string get_darkest_seccret(void) const;

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