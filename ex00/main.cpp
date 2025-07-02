#include "ClapTrap.hpp"

#include <iostream>

static void testAttack()
{
    ClapTrap bob("Bob");

    // Use up all energy
    for (int i = 0; i < 10; ++i) {
        bob.attack("Alice");
    }

    // Should fail
    bob.attack("Alice");
}

static void testRepair()
{
    ClapTrap bob("Bob");

    // Use up all energy
    for (int i = 0; i < 10; ++i) {
        bob.beRepaired(10);
    }

    // Should fail
    bob.beRepaired(10);
}

static void testKill()
{
    ClapTrap bob("Bob");

    // Kill slowly
    for (int i = 0; i < 10; ++i) {
        bob.takeDamage(1);
    }

    // Should fail
    bob.takeDamage(1);
}

static void testOverkill()
{
    ClapTrap bob("Bob");

    // One shot Bob
    bob.takeDamage(100);

    // Should fail
    bob.takeDamage(1);
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
    return 0;
}
