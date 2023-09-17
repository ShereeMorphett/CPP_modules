/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorphet <smorphet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 18:30:47 by smorphet          #+#    #+#             */
/*   Updated: 2023/09/17 12:46:58 by smorphet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>
#include <string>

class Brain
{
    private:
        std::string ideas_[100];
    public:
        const std::string& getIdeas(int index) const;
        void setIdeas(int index, const std::string& str);
        Brain& operator=(Brain const &Right);
        Brain();
        Brain(Brain &Cpy);
        ~Brain();
};





#endif