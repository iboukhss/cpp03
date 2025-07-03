#include "ClapTrap.hpp"

#include <iostream>

// Rule of four
ClapTrap::ClapTrap()
    : name("ClapTrap"),
      hitPoints(10),
      energyPoints(10),
      attackDamage(0)
{
    std::cout << "ClapTrap '" << name << "' default constructor called\n";
}

ClapTrap::ClapTrap(const ClapTrap& other)
    : name(other.name),
      hitPoints(other.hitPoints),
      energyPoints(other.energyPoints),
      attackDamage(other.attackDamage)
{
    std::cout << "ClapTrap '" << name << "' copy constructor called\n";
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
    if (this == &other) {
        return *this;
    }
    name = other.name;
    hitPoints = other.hitPoints;
    energyPoints = other.energyPoints;
    attackDamage = other.attackDamage;
    return *this;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap '" << name << "' destructor called\n";
}

// Constructors
ClapTrap::ClapTrap(const std::string& name)
    : name(name),
      hitPoints(10),
      energyPoints(10),
      attackDamage(0)
{
    std::cout << "ClapTrap '" << name << "' string constructor called\n";
}

// Public methods
void ClapTrap::attack(const std::string& target)
{
    if (hitPoints <= 0) {
        std::cout << name << " is destroyed and can't attack!\n";
        return;
    }
    if (energyPoints <= 0) {
        std::cout << name << " has no energy left to attack!\n";
        return;
    }
    energyPoints -= 1;
    std::cout << name << " attacks " << target << " for " << attackDamage << " points of damage!\n";
}

void ClapTrap::takeDamage(int amount)
{
    if (hitPoints <= 0) {
        std::cout << name << " is destroyed already!\n";
        return;
    }
    hitPoints -= amount;
    if (hitPoints < 0) {
        hitPoints = 0;
    }
    std::cout << name << " takes " << amount << " points of damage!\n";
}

void ClapTrap::beRepaired(int amount)
{
    if (hitPoints <= 0) {
        std::cout << name << " is destroyed and can't repair itself!\n";
        return;
    }
    if (energyPoints <= 0) {
        std::cout << name << " has no energy left to repair itself!\n";
        return;
    }
    energyPoints -= 1;
    hitPoints += amount;
    std::cout << name << " is repaired for " << amount << " hit points\n";
}
