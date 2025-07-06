#include "FragTrap.hpp"

#include <iostream>

static void testAttack()
{
    FragTrap eugene("Eugene");

    // Use up all energy
    for (int i = 0; i < 100; ++i) {
        eugene.attack("Alice");
    }

    // Should fail
    eugene.attack("Alice");
}

static void testRepair()
{
    FragTrap eugene("Eugene");

    // Use up all energy
    for (int i = 0; i < 100; ++i) {
        eugene.beRepaired(10);
    }

    // Should fail
    eugene.beRepaired(10);
}

static void testKill()
{
    FragTrap eugene("Eugene");

    // Kill slowly
    for (int i = 0; i < 10; ++i) {
        eugene.takeDamage(10);
    }

    // Should fail
    eugene.takeDamage(1);
}

static void testOverkill()
{
    ClapTrap eugene("Eugene");

    // One shot Eugene
    eugene.takeDamage(500);

    // Should fail
    eugene.takeDamage(1);
}

static void testHighFive()
{
    FragTrap eugene("Eugene");

    eugene.highFiveGuys();
    eugene.highFiveGuys();
}

int main()
{
    std::cout << "\n==== ATTACK TEST ====\n";
    testAttack();

    std::cout << "\n==== REPAIR TEST ====\n";
    testRepair();

    std::cout << "\n==== KILL TEST ====\n";
    testKill();

    std::cout << "\n==== OVERKILL TEST ====\n";
    testOverkill();

    std::cout << "\n==== HIGH FIVE TEST ====\n";
    testHighFive();

    return 0;
}
