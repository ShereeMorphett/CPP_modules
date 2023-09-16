/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorphet <smorphet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 12:39:19 by smorphet          #+#    #+#             */
/*   Updated: 2023/09/16 18:58:42 by smorphet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include "Color.hpp"
#include "Brain.hpp"


class Cat : public Animal
{
    private:
        Brain *catBrain_;
    
    public:
        Cat& operator=(Cat const &right);
        Cat();
        Cat(const Cat& Cpy);
        ~Cat();
        void makeSound(void) const;
};

#endif