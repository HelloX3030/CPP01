#include "Zombie.hpp"

int main()
{
    Zombie zomboss("Zomboss");
    zomboss.announce();
    std::cout << "------------------------" << std::endl;
    Zombie* zombie1 = newZombie("Dynamic Zombie");
    zombie1->announce();
    
    randomChump("Random Chump Zombie");
    zomboss.announce();
    std::cout << "------------------------" << std::endl;
    
    delete zombie1;
    return (0);
}
