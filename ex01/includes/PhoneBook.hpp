/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sle-huec <sle-huec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 13:50:52 by sle-huec          #+#    #+#             */
/*   Updated: 2022/11/04 14:43:31 by sle-huec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

class PhoneBook {
	// methode add pour que les utilisateurs puissent
	// renseigner les champs et enregistrer dans le tableau.
	// methode pour limiter à 8 users (check number)
	// methode replace oldest contact
	// attribut array de 8
	
public:

	PhoneBook(void);
	~PhoneBook();

	std::string PhoneBook::set_handler_input(void);
	std::string PhoneBook::get_handler_input(void)const;
	
	std::string PhoneBook::set_add(void);
	std::string PhoneBook::get_add(void)const;
	
	std::string PhoneBook::set_search(void);
	std::string PhoneBook::get_search(void)const;
	
	std::string PhoneBook::set_exit(void);
	std::string PhoneBook::get_exit(void)const;

private:

	Contact contacts_in_rep[8];
};

#endif