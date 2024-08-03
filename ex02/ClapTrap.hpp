/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykhayri <ykhayri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 09:53:05 by ykhayri           #+#    #+#             */
/*   Updated: 2024/08/03 11:02:19 by ykhayri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string>

class ClapTrap
{
protected:
    std::string name;
    int hp;
    int ep;
    int damage;

public:
    ClapTrap();
    ClapTrap(std::string);
    ClapTrap(const ClapTrap &);
    ClapTrap(std::string n, int h, int e, int d);
    ClapTrap &operator=(const ClapTrap &);
    ~ClapTrap();
    void attack(const std::string &target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    std::string get_name();
};