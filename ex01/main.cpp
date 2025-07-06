#include "ScavTrap.hpp"

#include <iostream>

static void testAttack()
{
    ScavTrap billy("Billy");

    // Use up all energy
    for (int i = 0; i < 50; ++i) {
        billy.attack("Alice");
    }

    // Should fail
    billy.attack("Alice");
}

static void testRepair()
{
    ScavTrap billy("Billy");

    // Use up all energy
    for (int i = 0; i < 50; ++i) {
        billy.beRepaired(10);
    }

    // Should fail
    billy.beRepaired(10);
}

static void testKill()
{
    ScavTrap billy("Billy");

    // Kill slowly
    for (int i = 0; i < 10; ++i) {
        billy.takeDamage(10);
    }

    // Should fail
    billy.takeDamage(1);
}

static void testOverkill()
{
    ClapTrap billy("Billy");

    // One shot Billy
    billy.takeDamage(500);

    // Should fail
    billy.takeDamage(1);
}

static void testGuardMode()
{
    ScavTrap billy("Billy");

    billy.guardGate();
    billy.guardGate();
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

    std::cout << "\n==== GUARD TEST ====\n";
    testGuardMode();

    return 0;
}
