/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorphet <smorphet@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 10:12:10 by smorphet          #+#    #+#             */
/*   Updated: 2023/09/20 11:43:46 by smorphet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#ifndef MateriaSource_HPP
# define MateriaSource_HPP

# include <iostream>

#include "IMateriaSource.hpp"

class AMateria;
class Ice;
class Cure;

class MateriaSource : public IMateriaSource
{
	private:
		AMateria *(learned_[4]);
	
	public:
		void printLearned_();
 		void learnMateria(AMateria *m);
		AMateria* createMateria(std::string const & type);
		MateriaSource();
		MateriaSource(MateriaSource const & src );
		~MateriaSource();
		MateriaSource &	operator=( MateriaSource const & right);
};


#endif