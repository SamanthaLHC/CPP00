/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samantha <samantha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 13:14:31 by sle-huec          #+#    #+#             */
/*   Updated: 2022/11/03 21:01:58 by samantha         ###   ########.fr       */
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

	std::string set_name(void);
	std::string get_name(void)const;

	std::string set_lastname(void);
	std::string get_lastname(void)const;
	
	std::string set_surname(void);
	std::string get_surname(void)const;
	
	std::string set_phone_number(void);
	std::string get_phone_number(void)const;
	
	std::string set_darkest_secret(void);
	std::string get_darkest_secret(void)const;

private:
	std::string _name;
	std::string _lastname;
	std::string _surname;
	std::string _phone_number;
	std::string _dark_secret;
};

#endif