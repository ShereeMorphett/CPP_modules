
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
		Zombie(std::string identify);
		~Zombie();
};

Zombie* newZombie( std::string name );
void randomChump( std::string name );



#endif

