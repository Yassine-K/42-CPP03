#include "ClapTrap.hpp"

int main(void)
{
    ClapTrap A;
    ClapTrap B(A);
    ClapTrap C;
    ClapTrap D ("Yassine");

    C = A;
    A.attack("test");
    A.beRepaired(5);
    A.takeDamage(1);
    return 0;
}