/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorphet <smorphet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 16:20:11 by smorphet          #+#    #+#             */
/*   Updated: 2023/09/16 16:25:13 by smorphet         ###   ########.fr       */
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
        std::string getType() const;
        virtual void makeSound() const;
        WrongAnimal& operator=(WrongAnimal const &right);
        WrongAnimal();
        WrongAnimal(std::string type);
        WrongAnimal(WrongAnimal& Cpy);
        ~WrongAnimal();
};


#endif