#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>

int main(void)
{
    std::cout << "1. CONSTRUCTION ORDER" << std::endl;
    std::cout << "[ScavTrap Creation]" << std::endl;
    ScavTrap scav("Scavvy");
    std::cout << std::endl;

    std::cout << "[FragTrap Creation]" << std::endl;
    FragTrap frag("Fraggy");
    std::cout << std::endl;


    std::cout << "2. ATTACK AND DAMAGE COMPARISON" << std::endl;
    // ScavTrap damage: 20
    scav.attack("small drone");
    
    // FragTrap damage: 30
    frag.attack("giant robot");
    std::cout << std::endl;


    std::cout << "3. UNIQUE ABILITIES" << std::endl;
    std::cout << "[ScavTrap Special]" << std::endl;
    scav.guardGate(); // Gate keeper mode
    
    std::cout << "\n[FragTrap Special]" << std::endl;
    frag.highFivesGuys(); // High five request
    std::cout << std::endl;


    std::cout << "4. REPAIR AND HIT POINTS" << std::endl;
    std::cout << "Scavvy takes damage:" << std::endl;
    scav.takeDamage(40);
    scav.beRepaired(10);

    std::cout << "\nFraggy takes damage:" << std::endl;
    frag.takeDamage(40);
    frag.beRepaired(10);
    std::cout << std::endl;


    std::cout << "5. ENERGY MANAGEMENT" << std::endl;
    // ScavTrap has 50 Energy
    // FragTrap has 100 Energy
    std::cout << "Scavvy Energy Check (50):" << std::endl;
    for (int i = 0; i < 51; i++)
        scav.attack("target"); 

    std::cout << "\nFraggy Energy Check (100):" << std::endl;
    for (int i = 0; i < 51; i++)
        frag.attack("target");
    std::cout << std::endl;


    std::cout << "6. DESTRUCTION ORDER" << std::endl;
    return 0;
}
