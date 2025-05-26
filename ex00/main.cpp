#include "Zombie.hpp"

int main()
{
    Zombie zomboss("Zomboss");
    zomboss.announce();
    std::cout << "------------------------" << std::endl;
    Zombie* zombie1 = newZombie("Zombie1");
    zombie1->announce();
    
    randomChump("Zombie2");
    zomboss.announce();
    std::cout << "------------------------" << std::endl;
    
    delete zombie1;
    return (0);
}
