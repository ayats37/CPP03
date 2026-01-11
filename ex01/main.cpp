/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taya <taya@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/09 10:37:05 by taya              #+#    #+#             */
/*   Updated: 2026/01/11 11:18:19 by taya             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>


static void statusClap(const ClapTrap& c)
{
    std::cout << "[STATUS] " << c.getName() << " HP:" << c.getHitPoints() << " EP:" << c.getEnergyPoints() << " AD:" << c.getAttackDamage() << std::endl;
}

int main()
{
    std::cout << "=== ClapTrap ===" << std::endl;
    ClapTrap a("Aya");
    statusClap(a);
    a.attack("Monster");
    a.takeDamage(5);
    a.beRepaired(3);
    statusClap(a);

    std::cout << "\n=== ScavTrap ===" << std::endl;
    ScavTrap s("Sousou");
    statusClap(s);

    std::cout << "\n=== ScavTrap actions ===" << std::endl;
    s.attack("ptipana");
    s.guardGate();
    s.takeDamage(30);
    s.beRepaired(10);
    statusClap(s);

    std::cout << "\n=== Copy / Assign ===" << std::endl;
    ScavTrap cpy(s);
    ScavTrap assign;
    assign = s;

    return 0;
}

