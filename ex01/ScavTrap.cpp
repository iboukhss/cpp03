#include "ScavTrap.hpp"

#include <iostream>

// Constructors
ScavTrap::ScavTrap()
    : ClapTrap("UnnamedScav", 100, 50, 20)
{
    std::cout << "ScavTrap '" << name << "' default constructor called\n";
}

ScavTrap::ScavTrap(const ScavTrap& other)
    : ClapTrap(other)
{
    std::cout << "ScavTrap '" << name << "' copy constructor called\n";
}

ScavTrap::ScavTrap(const std::string& name)
    : ClapTrap(name, 100, 50, 20)
{
    std::cout << "ScavTrap '" << this->name << "' string constructor called\n";
}

// Destructor
ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap '" << name << "' destructor called\n";
}

// Operators
ScavTrap& ScavTrap::operator=(const ScavTrap& other)
{
    if (this == &other) {
        return *this;
    }

    ClapTrap::operator=(other);
    return *this;
}

// Public methods
void ScavTrap::guardGate() const
{
    std::cout << "ScavTrap '" << name << "' is now in Gate keeper mode\n";
}
