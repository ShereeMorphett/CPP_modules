#include "Zombie.hpp"



int main(int argc, char *argv[])
{
	
	Zombie	thing("sally");
	thing.announce();

	Zombie newbie = newZombie("NewDude");
	//newbie->announce();
	


    return 0;
} 
