/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sle-huec <sle-huec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 13:14:31 by sle-huec          #+#    #+#             */
/*   Updated: 2022/11/04 14:42:19 by sle-huec         ###   ########.fr       */
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

	void set_name(void);
	std::string get_name(void)const;

	void set_lastname(void);
	std::string get_lastname(void)const;
	
	void set_surname(void);
	std::string get_surname(void)const;
	
	void set_phone_number(void);
	std::string get_phone_number(void)const;
	
	void set_darkest_secret(void);
	std::string get_darkest_secret(void)const;

private:
	std::string _name;
	std::string _lastname;
	std::string _surname;
	std::string _phone_number;
	std::string _dark_secret;
};

#endif