/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taya <taya@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/09 10:38:18 by taya              #+#    #+#             */
/*   Updated: 2026/01/11 12:05:07 by taya             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include <iostream>

static void status(const ClapTrap& c)
{
    std::cout << "[STATUS] " << c.getName() << " HP:" << c.getHitPoints() << " EP:" << c.getEnergyPoints() << " AD:" << c.getAttackDamage() << std::endl;
}

int main()
{
    std::cout << "=== DiamondTrap ===" << std::endl;
    DiamondTrap d("Aya");
    d.whoAmI();
    d.attack("Target");
    status(d);

    std::cout << "\n=== Damage/repair ===" << std::endl;
    d.takeDamage(20);
    d.beRepaired(10);
    status(d);

    std::cout << "\n=== Copy / Assign ===" << std::endl;
    DiamondTrap copy(d);
    copy.whoAmI();

    DiamondTrap assign;
    assign = d;
    assign.whoAmI();

    return 0;
}

