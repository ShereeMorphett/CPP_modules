/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorphet <smorphet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 09:32:46 by smorphet          #+#    #+#             */
/*   Updated: 2023/09/18 19:10:10 by smorphet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include <string>
#include <iostream>
#include "ICharacter.hpp"


class AMateria //abstract class
{
	private:
		std::string type_;
	
	protected:
		AMateria(std::string const &type);
		AMateria(AMateria const &cpy);
		
	public:
		AMateria& operator=(AMateria const &right);
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target) = 0;
		virtual ~AMateria();
		std::string const &getType() const;
};

#endif
