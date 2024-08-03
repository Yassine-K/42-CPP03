/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykhayri <ykhayri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 09:53:02 by ykhayri           #+#    #+#             */
/*   Updated: 2024/08/03 12:20:07 by ykhayri          ###   ########.fr       */
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
    AS.attack("test");
    AS.attack("test");
    AS.attack("test");
    AS.attack("test");
    AS.attack("test");
    AS.beRepaired(5);
    AS.takeDamage(1);
    return 0;
}