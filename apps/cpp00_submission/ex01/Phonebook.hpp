/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorphet <smorphet@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 10:23:43 by smorphet          #+#    #+#             */
/*   Updated: 2023/08/24 10:48:04 by smorphet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H
#include "Contact.hpp"
# include <string>
# include <iostream>


class Phonebook
{
	private:
		Contact	contacts[8]; 
		int		size;
	public:
		Phonebook();
		const	Contact*	GetContacts() const;//inside the function only reads the class therefore contacts behaves private
		int					GetSize() const;
		void				AddContact();
		void				PrintContact(std::ostream& os, int index);
};

std::ostream& operator <<(std::ostream&, const Phonebook&);

#endif