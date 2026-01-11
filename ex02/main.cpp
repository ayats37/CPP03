/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taya <taya@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/09 10:37:30 by taya              #+#    #+#             */
/*   Updated: 2026/01/11 11:48:05 by taya             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include <iostream>


static void status(const ClapTrap& c)
{
    std::cout << "[STATUS] " << c.getName() << " HP:" << c.getHitPoints() << " EP:" << c.getEnergyPoints() << " AD:" << c.getAttackDamage() << std::endl;
}

int main()
{
    std::cout << "=== ClapTrap ===" << std::endl;
    ClapTrap a("Aya");
    status(a);

    std::cout << "\n=== ScavTrap ===" << std::endl;
    ScavTrap s("Sousou");
    status(s);
    s.guardGate();

    std::cout << "\n=== FragTrap ===" << std::endl;
    FragTrap f("Fifi");
    status(f);
    f.attack("Target");
    f.highFivesGuys();
    f.takeDamage(40);
    f.beRepaired(10);
    status(f);

    std::cout << "\n=== Copy / Assign ===" << std::endl;
    FragTrap cpy(f);
    FragTrap assign;
    assign = f;
    
  return 0;
}
