#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

#include <string>

class ScavTrap : public ClapTrap {
public:
    ScavTrap();
    ScavTrap(const ScavTrap& other);
    ScavTrap(const std::string& name);
    ~ScavTrap();

    ScavTrap& operator=(const ScavTrap& other);

    void guardGate() const;
};

#endif // SCAVTRAP_HPP
