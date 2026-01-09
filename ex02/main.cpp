/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taya <taya@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/09 10:37:30 by taya              #+#    #+#             */
/*   Updated: 2026/01/09 13:30:14 by taya             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include <iostream>

int main()
{
    std::cout << "----- ClapTrap -----" << std::endl;
    ClapTrap c("Clap");
    c.attack("enemy");

    std::cout << "\n----- ScavTrap -----" << std::endl;
    ScavTrap s("Scav");
    s.attack("enemy");
    s.guardGate();

    std::cout << "\n----- FragTrap -----" << std::endl;
    FragTrap f("Frag");
    f.attack("enemy");
    f.highFivesGuys();

    return 0;
}
