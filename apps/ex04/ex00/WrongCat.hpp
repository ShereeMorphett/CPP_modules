/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorphet <smorphet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 12:39:19 by smorphet          #+#    #+#             */
/*   Updated: 2023/09/16 14:09:25 by smorphet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WrongCat_HPP
# define WrongCat_HPP

#include "WrongAnimal.hpp"
#include "Color.hpp"

class WrongCat : public WrongAnimal
{
    public:
        WrongCat& operator=(WrongCat const &right);
        WrongCat();
        WrongCat(WrongCat& Cpy);
        ~WrongCat();
        void makeSound(void) const;
};

#endif