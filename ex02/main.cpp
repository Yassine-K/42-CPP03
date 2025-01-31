/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykhayri <ykhayri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 09:53:02 by ykhayri           #+#    #+#             */
/*   Updated: 2024/08/03 11:33:03 by ykhayri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main(void)
{
    FragTrap AS;
    FragTrap BS(AS);
    FragTrap CS;
    FragTrap DS ("Yassine");

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