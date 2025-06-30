#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <string>

class ClapTrap {
public:
    ClapTrap();
    ClapTrap(const ClapTrap& other);
    ClapTrap(const std::string& name);
    ClapTrap& operator=(const ClapTrap& other);
    ~ClapTrap();

    void attack(const std::string& target);
    void takeDamage(int amount);
    void beRepaired(int amount);

    bool isAlive() const;
    bool hasEnergy() const;

private:
    std::string name;
    int hitPoints;
    int energyPoints;
    int attackDamage;
};

#endif // CLAPTRAP_HPP
