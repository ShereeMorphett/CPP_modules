#include "Zombie.hpp"


int	main(void)
{
	int	size;

	size = 20;
	Zombie *horde = zombieHorde(size, "Sally");
	for (int index = 0; index < size; index++)
		horde[index].announce();
	delete [] horde; //deletes full array and anything in it

}
