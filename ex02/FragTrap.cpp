/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykhayri <ykhayri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 11:21:22 by ykhayri           #+#    #+#             */
/*   Updated: 2024/08/03 12:56:38 by ykhayri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap("", 100, 100, 30){
    std::cout << "FragTrap created!" << std::endl;
}

FragTrap::FragTrap(std::string who) : ClapTrap(who, 100, 100, 30)
{
    std::cout << "FragTrap " << who <<" created!" << std::endl;
}

FragTrap::FragTrap(const FragTrap &clap) : ClapTrap(clap)
{
    std::cout << "FragTrap copy made!" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &clap)
{
    ClapTrap::operator=(clap);
    std::cout << "FragTrap op copy created!" << std::endl;
    return *this;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap destructor called!" << std::endl;
}

void    FragTrap::highFivesGuys() 
{
    std::cout << "Give FragTrap a high five!" << std::endl;
}