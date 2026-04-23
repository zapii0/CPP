#include "ClapTrap.hpp"
#include <iostream>

int main(void)
{
    std::cout << "1. OBJECT CREATION & INITIAL STATS" << std::endl;
    ClapTrap clippy("Clippy");
    ClapTrap target("TargetBot");
    std::cout << std::endl;

    std::cout << "2. ATTACK & DAMAGE MECHANICS" << std::endl;
    clippy.attack("TargetBot");
    target.takeDamage(0);
    std::cout << std::endl;

    std::cout << "3. REPAIR & SURVIVABILITY" << std::endl;
    target.takeDamage(5);
    target.beRepaired(3);
    
    target.takeDamage(10);
    target.beRepaired(5);
    target.attack("Clippy");
    std::cout << std::endl;

    std::cout << "4. ENERGY EXHAUSTION TEST" << std::endl;
    ClapTrap runner("Runner");
    for (int i = 0; i < 11; i++)
    {
        std::cout << "Action " << i + 1 << ": ";
        runner.attack("the wall");
    }
    std::cout << std::endl;

    std::cout << "5. ORTHODOX CANONICAL FORM TEST" << std::endl;
    ClapTrap original("Original");
    ClapTrap copy(original);
    ClapTrap assigned;
    assigned = original;
    std::cout << std::endl;

    std::cout << "6. DESTRUCTION PHASE" << std::endl;
    return 0;
}