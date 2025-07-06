#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <string>

class ClapTrap {
public:
    ClapTrap();
    ClapTrap(const ClapTrap& other);
    ClapTrap(const std::string& name);
    ClapTrap(const std::string& name, int hp, int ep, int ad);
    virtual ~ClapTrap();

    ClapTrap& operator=(const ClapTrap& other);

    void attack(const std::string& target);
    void takeDamage(int amount);
    void beRepaired(int amount);

protected:
    std::string name;
    int hitPoints;
    int energyPoints;
    int attackDamage;
};

#endif // CLAPTRAP_HPP
