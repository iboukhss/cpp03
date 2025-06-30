#include "ClapTrap.hpp"

#include <iostream>

ClapTrap::ClapTrap()
    : name("ClapTrap"),
      hitPoints(10),
      energyPoints(10),
      attackDamage(0)
{
    std::cout << "Default constructor called\n";
}

ClapTrap::ClapTrap(const std::string& name)
    : name(name),
      hitPoints(10),
      energyPoints(10),
      attackDamage(0)
{
    std::cout << "String constructor called\n";
}

ClapTrap::~ClapTrap()
{
    std::cout << "Destructor called\n";
}

bool ClapTrap::isAlive() const
{
    return (hitPoints > 0);
}

bool ClapTrap::hasEnergy() const
{
    return (energyPoints > 0);
}

void ClapTrap::attack(const std::string& target)
{
    if (!isAlive()) {
        std::cout << name << " is destroyed and can't do anything!\n";
        return;
    }
    if (!hasEnergy()) {
        std::cout << name << " has no energy left!\n";
    }

    energyPoints -= 1;
    std::cout << name << " attacks " << target << " for " << attackDamage << " points of damage!\n";
}

void ClapTrap::takeDamage(int amount)
{
    if (!isAlive()) {
        std::cout << name << " is destroyed and can't do anything!\n";
        return;
    }
    if (!hasEnergy()) {
        std::cout << name << " has no energy left!\n";
    }

    energyPoints -= 1;
    int actualDamage = (amount > hitPoints) ? hitPoints : amount;
    hitPoints -= actualDamage;
    std::cout << name << " takes " << actualDamage << " points of damage!\n";
}

void ClapTrap::beRepaired(int amount)
{
    if (!isAlive()) {
        std::cout << name << " is destroyed and can't do anything!\n";
        return;
    }
    if (!hasEnergy()) {
        std::cout << name << " has no energy left!\n";
    }

    energyPoints -= 1;
    hitPoints += amount;
    std::cout << name << " is repaired for " << amount << " points of damage.\n";
}
