 #include "Zombie.hpp"
 
 void randomChump( std::string name )
 {
	//creates the object on the stack
	Zombie randomChump(name);
	randomChump.announce();
 }//end of scope and all allocated to stack are destroyed