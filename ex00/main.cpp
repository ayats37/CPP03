/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taya <taya@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/09 10:36:51 by taya              #+#    #+#             */
/*   Updated: 2026/01/11 11:05:37 by taya             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

static void printStatus(const ClapTrap& c)
{
    std::cout << "[STATUS] " << c.getName() << " | HP: " << c.getHitPoints() << " | EP: " << c.getEnergyPoints() << " | AD: " << c.getAttackDamage() << std::endl;
}

int main()
{
    std::cout << "=== Basic actions ===" << std::endl;
    ClapTrap a("Aya");

    printStatus(a);
    a.attack("Monster");
    a.takeDamage(3);
    a.beRepaired(2);
    printStatus(a);

    std::cout << "\n=== Energy runs out ===" << std::endl;
    ClapTrap b("EnergyTest");
    for (int i = 0; i < 12; i++)
      b.attack("Dummyyyyyy");
    printStatus(b);
    b.beRepaired(5);

    std::cout << "\n=== Hit points go to 0 ===" << std::endl;
    ClapTrap c("ptipana");
    c.takeDamage(20);
    c.attack("Enemy");
    c.beRepaired(5);
    printStatus(c);

    std::cout << "\n=== Copy constructor ===" << std::endl;
    ClapTrap d(a);
    printStatus(d);

    std::cout << "\n=== Copy assignment ===" << std::endl;
    ClapTrap e;
    e = a;
    printStatus(e);

    return 0;
}
