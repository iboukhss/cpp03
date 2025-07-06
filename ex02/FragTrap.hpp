#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

#include <string>

class FragTrap : public ClapTrap {
public:
    FragTrap();
    FragTrap(const FragTrap& ohter);
    FragTrap(const std::string& name);
    virtual ~FragTrap();

    FragTrap& operator=(const FragTrap& ohter);

    void highFiveGuys() const;
};

#endif // FRAGTRAP_HPP
