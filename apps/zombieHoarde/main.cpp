#include "Zombie.hpp"



int main(int argc, char *argv[])
{
	
	Zombie	thing("sally");
	thing.announce();
	
	Zombie *newbie = newZombie("NewDude");
	newbie->announce();
	
	randomChump("spaghetti");

	delete newbie;

    return 0;
} 
