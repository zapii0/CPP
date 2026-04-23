#include "ScavTrap.hpp"
#include <iostream>

int main(void)
{
    std::cout << "1. CONSTRUCION ORDER TEST" << std::endl;
    ScavTrap scavvy("Scavvy");
    std::cout << std::endl;

    std::cout << "2. SCAVTRAP STATS & ATTACK TEST" << std::endl;
    scavvy.attack("a training dummy");
    std::cout << std::endl;

    std::cout << "3. SCAVTRAP SPECIAL ABILITY TEST" << std::endl;
    scavvy.guardGate();
    std::cout << std::endl;

    std::cout << "4. INHERITED MECHANICS TEST (takeDamage/beRepaired)" << std::endl;
    scavvy.takeDamage(30);
    scavvy.beRepaired(20);
    std::cout << std::endl;

    std::cout << "5. ENERGY DEPLETION TEST" << std::endl;
    ScavTrap tiredBot("TiredBot");
    for (int i = 0; i < 51; i++)
    {
        if (i == 0 || i == 49 || i == 50)
            std::cout << "Action " << i + 1 << ": ";
        tiredBot.attack("the air");
    }
    std::cout << std::endl;

    std::cout << "6. DESTRUCTION ORDER TEST" << std::endl;
    return 0;
}