/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykhayri <ykhayri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 09:53:02 by ykhayri           #+#    #+#             */
/*   Updated: 2024/08/03 12:59:28 by ykhayri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main(void)
{
    DiamondTrap AS;
    DiamondTrap BS(AS);
    DiamondTrap CS;
    DiamondTrap DS ("Yassine");

    CS = AS;
    AS.attack("test");
  
    AS.beRepaired(5);
    DS.takeDamage(1);
    DS.guardGate();
    DS.highFivesGuys();
    DS.whoAmI();
    return 0;
}