/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykhayri <ykhayri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 09:53:08 by ykhayri           #+#    #+#             */
/*   Updated: 2024/08/03 11:31:01 by ykhayri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    name = "";
    hp = 10;
    ep = 10;
    damage = 0;
    std::cout << "ClapTrap created!" << std::endl;
}

ClapTrap::ClapTrap(std::string n, int h, int e, int d)
{
    name = n;
    hp = h;
    ep = e;
    damage = d;
    std::cout << "ClapTrap " << name << " created!" << std::endl;
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
    std::cout << "ClapTrap destructor called!" << std::endl;
}

void ClapTrap::attack(const std::string &target)
{
    if (hp && ep)
    {
        ep--;
        std::cout << "ClapTrap " << name << " attacks " << target << ", causing " << damage << " points of damage!" << std::endl;
    }
    else
        std::cout << "ClapTrap " << name << (!hp ? ": Dude, you're dead!" : ": You've been wasting your energy, now suffer!") << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (hp)
    {
        hp -= amount;
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
        std::cout << "ClapTrap " << (!hp ? "Dude, you're dead!" : "You've been wasting your energy, now suffer!") << std::endl;
}
