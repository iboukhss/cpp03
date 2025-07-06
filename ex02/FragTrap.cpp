#include "FragTrap.hpp"

#include <iostream>

// Constructors
FragTrap::FragTrap()
    : ClapTrap("UnnamedScav", 100, 100, 30)
{
    std::cout << "FragTrap '" << name << "' default constructor called\n";
}

FragTrap::FragTrap(const FragTrap& other)
    : ClapTrap(other)
{
    std::cout << "FragTrap '" << name << "' copy constructor called\n";
}

FragTrap::FragTrap(const std::string& name)
    : ClapTrap(name, 100, 100, 30)
{
    std::cout << "FragTrap '" << this->name << "' string constructor called\n";
}

// Destructor
FragTrap::~FragTrap()
{
    std::cout << "FragTrap '" << name << "' destructor called\n";
}

// Operators
FragTrap& FragTrap::operator=(const FragTrap& other)
{
    if (this == &other) {
        return *this;
    }

    ClapTrap::operator=(other);
    return *this;
}

// Public methods
void FragTrap::highFiveGuys() const
{
    std::cout << "FragTrap '" << name << "' requests a high five\n";
}
