/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sle-huec <sle-huec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 13:50:52 by sle-huec          #+#    #+#             */
/*   Updated: 2022/11/02 15:47:46 by sle-huec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

class PhoneBook {
	
public:
// disponible a l interieur et exterieur de la classe 
// ici ce qui est utile pour les utilisateurs 
	PhoneBook(void);
	~PhoneBook(void);

//void get_info_contact(void) const;
// void set_contact(void);

private:
// seulememnt possible d y acceder de puis l interieur de la classe
// masquer les détails d'implémentation
// il vaut mieux préfixer un underscore devant le nom d un membre privé

};

#endif