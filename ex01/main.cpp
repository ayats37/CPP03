/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taya <taya@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/09 10:37:05 by taya              #+#    #+#             */
/*   Updated: 2026/01/09 10:37:06 by taya             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    std::cout << "----- ClapTrap test -----" << std::endl;
    ClapTrap c("Aya");
    c.attack("enemy");
    c.takeDamage(3);
    c.beRepaired(2);

    std::cout << "\n----- ScavTrap test -----" << std::endl;
    ScavTrap s("Ptipana");
    s.attack("enemy");
    s.takeDamage(30);
    s.beRepaired(10);
    s.guardGate();

    return 0;
}
