#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    name = "";
    hp = 10;
    ep = 10;
    damage = 0;
    std::cout << "ClapTrap created!" << std::endl;
}

ClapTrap::ClapTrap(std::string who)
{
    name = who;
    hp = 10;
    ep = 10;
    damage = 0;
    std::cout << "ClapTrap " << who <<" created!" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &clap)
{
    name = clap.name;
    hp = clap.hp;
    ep = clap.ep;
    damage = clap.damage;
    std::cout << "ClapTrap copy made!" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &clap)
{
    if (this != &clap)
    {
        name = clap.name;
        hp = clap.hp;
        ep = clap.ep;
        damage = clap.damage;
    }
    std::cout << "ClapTrap op copy created!" << std::endl;
    return *this;
}

ClapTrap::~ClapTrap()
{
    std::cout << "Destructor called!" << std::endl;
}

void ClapTrap::attack(const std::string &target)
{
    if (hp && ep)
    {
        ep--;
        std::cout << "ClapTrap " << name << " attacks " << target << ", causing " << damage << " points of damage!" << std::endl;
    }
    else
        std::cout << (!hp ? "Dude, you're dead!" : "You've been wasting your energy, now suffer!") << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (hp)
    {
        hp += amount;
        ep--;
        std::cout << "ClapTrap " << name << " took " << amount << " of damage!" << std::endl;
    }
    else
        std::cout << "You're already dead!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (hp && ep)
    {
        hp += amount;
        ep--;
        std::cout << "ClapTrap " << name << " repairs itself by " << amount << " points!" << std::endl;
    }
    else
        std::cout << (!hp ? "Dude, you're dead!" : "You've been wasting your energy, now suffer!") << std::endl;
}