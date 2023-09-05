#include <string>
#include "Zombie.hpp"

void Zombie::announce( void )
{
	std::cout << "\e[1;32m" << name  << ": " << "\e[0m";
	std::cout << "BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie(std::string identify)
{
	name = identify;
}

Zombie::~Zombie()
{
	std::cout << name << " has been destroyed" << std::endl; 
}
