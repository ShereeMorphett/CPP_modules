#include "Zombie.hpp"


Zombie*	zombieHorde(int size, std::string name)
{
	Zombie *horde = new Zombie[size];
	for (int index = 0; index < size; index++)
		horde[index].nameObject(name);
	return (horde);
}