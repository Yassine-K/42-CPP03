#pragma once
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
public:
    ScavTrap();
    ScavTrap(std::string);
    ScavTrap(const ClapTrap &);
    ~ScavTrap();
    void guardGate();
    void attack(const std::string &target);
};