/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykhayri <ykhayri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 09:52:59 by ykhayri           #+#    #+#             */
/*   Updated: 2024/08/03 09:59:35 by ykhayri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
public:
    ScavTrap();
    ScavTrap(std::string);
    ScavTrap(const ScavTrap &);
    ScavTrap &operator=(const ScavTrap &);
    ~ScavTrap();
    void guardGate();
    void attack(const std::string &target);
};