/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykhayri <ykhayri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 09:53:02 by ykhayri           #+#    #+#             */
/*   Updated: 2024/08/03 10:43:32 by ykhayri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(void)
{
    ClapTrap A;
    ClapTrap B(A);
    ClapTrap C;
    ClapTrap D ("Yassine");

    C = A;
    A.attack("test");
    A.attack("test");
    A.attack("test");
    A.attack("test");
    A.attack("test");
    A.attack("test");
    A.attack("test");
    A.attack("test");
    A.attack("test");
    A.attack("test");
    A.attack("test");
    A.attack("test");
    A.beRepaired(5);
    A.takeDamage(1);

    std::cout << "--------------------" << std::endl;
    ScavTrap AS;
    ScavTrap BS(AS);
    ScavTrap CS;
    ScavTrap DS ("Yassine");

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