/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorphet <smorphet@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 10:23:16 by smorphet          #+#    #+#             */
/*   Updated: 2023/08/24 12:01:06 by smorphet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_H
# define CONTACT_CLASS_H
# include <string>
# include <iostream>

class Contact {
	private:
		std::string		firstName;
		std::string		lastName;
		std::string		nickname;
		std::string		phoneNumber;
		std::string		secret;
	
	public:
		void			setAttributes();
		std::string		getInput(std::string prompt) const;
		std::string		setPhoneNumber();
		std::string		getFirstName() const;
		std::string		getLastName() const;
		std::string		getNickname() const;
		std::string		getPhoneNumber() const;
		std::string		getSecret() const;
};


#endif