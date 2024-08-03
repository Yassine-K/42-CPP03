/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykhayri <ykhayri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 11:36:02 by ykhayri           #+#    #+#             */
/*   Updated: 2024/08/03 12:26:06 by ykhayri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

DiamondTrap::DiamondTrap(){
	hp = FragTrap::hp;
	ep = ScavTrap::ep;
	damage = FragTrap::damage;
    std::cout << "DiamondTrap created!" << std::endl;
}

DiamondTrap::DiamondTrap(std::string who)
{
	name = who;
	ClapTrap::name = who + "_clap_name";
	hp = FragTrap::hp;
	ep = ScavTrap::ep;
	damage = FragTrap::damage;
    std::cout << "DiamondTrap " << who << " created!" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &clap) : ClapTrap(clap)
{
    std::cout << "DiamondTrap copy made!" << std::endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &clap)
{
    ClapTrap::operator=(clap);
    std::cout << "DiamondTrap op copy created!" << std::endl;
    return *this;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap destructor called!" << std::endl;
}

void DiamondTrap::attack(const std::string &target) {
	std::cout << "DiamondTrap: ";
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI() {
    std::cout << "My name is " << name << " from the " << ClapTrap::name << " division!" << std::endl;
}