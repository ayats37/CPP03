/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taya <taya@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/09 10:38:18 by taya              #+#    #+#             */
/*   Updated: 2026/01/09 12:45:31 by taya             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include <iostream>

int main()
{
    std::cout << "----- DiamondTrap test -----" << std::endl;
    DiamondTrap d("Aya");

    d.attack("enemy"); 
    d.takeDamage(30);
    d.beRepaired(10);
    d.guardGate();
    d.highFivesGuys(); 
    d.whoAmI();

    return 0;
}
