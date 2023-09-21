/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorphet <smorphet@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 16:20:11 by smorphet          #+#    #+#             */
/*   Updated: 2023/09/20 13:37:51 by smorphet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <string>
#include <iostream>
#include "Color.hpp"


class WrongAnimal 
{
    protected:
        std::string Type_;
    public:
        virtual std::string getType() const;
        void makeSound() const;
        WrongAnimal& operator=(WrongAnimal const &right);
        WrongAnimal();
        WrongAnimal(std::string type);
        WrongAnimal(WrongAnimal& Cpy);
        virtual ~WrongAnimal();
};


#endif