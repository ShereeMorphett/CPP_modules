
#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>
#include <iomanip>


class Zombie
{
	private:
		std::string name;

	public:
		void announce( void );
		Zombie(void);
		~Zombie();
	void	nameObject(std::string name);
};

Zombie*	zombieHorde(int size, std::string name);



#endif

