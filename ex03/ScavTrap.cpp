/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykhayri <ykhayri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 09:51:08 by ykhayri           #+#    #+#             */
/*   Updated: 2024/08/03 11:02:38 by ykhayri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap("", 100, 50, 20){
    std::cout << "ScavTrap created!" << std::endl;
}

ScavTrap::ScavTrap(std::string who) : ClapTrap(who, 100, 50, 20)
{
    std::cout << "ScavTrap " << who <<" created!" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &clap) : ClapTrap(clap)
{
    std::cout << "ScavTrap copy made!" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &clap)
{
    ClapTrap::operator=(clap);
    std::cout << "ScavTrap op copy created!" << std::endl;
    return *this;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap destructor called!" << std::endl;
}

void    ScavTrap::guardGate() {
    std::cout << "ScavTrap is now in Gate keeper mode." << std::endl;
}

void ScavTrap::attack(const std::string &target) {
    if (hp && ep)
    {
        ep--;
        std::cout << "ScravTrap " << name << " attacks " << target << ", causing " << damage << " points of damage!" << std::endl;
    }
    else
        std::cout << "ScravTrap " << name << (!hp ? ": Dude, you're dead!" : ": You've been wasting your energy, now suffer!") << std::endl;
}