#include "ClapTrap.hpp"

int main()
{
    ClapTrap bobby("Bobby");
    ClapTrap alfred("Alfred");

    bobby.attack("Alfred");
    alfred.takeDamage(4);

    bobby.attack("Alfred");
    alfred.takeDamage(8);

    alfred.attack("Bobby");

    bobby.attack("Alfred");
    alfred.takeDamage(10);

    return 0;
}
