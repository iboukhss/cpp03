#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <string>

class ClapTrap {
public:
    ClapTrap();
    ClapTrap(const ClapTrap& other);
    ClapTrap& operator=(const ClapTrap& other);
    ~ClapTrap();

    ClapTrap(const std::string& name);

    void attack(const std::string& target);
    void takeDamage(int amount);
    void beRepaired(int amount);

private:
    std::string name;
    int hitPoints;
    int energyPoints;
    int attackDamage;
};

#endif // CLAPTRAP_HPP
