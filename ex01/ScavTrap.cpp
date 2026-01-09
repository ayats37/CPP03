/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taya <taya@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/09 10:37:10 by taya              #+#    #+#             */
/*   Updated: 2026/01/09 13:26:39 by taya             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap() : ClapTrap(){
  Hit_points = 100;
  Energy_points = 50;
  Attack_damage = 20;
  std::cout << "ScavTrap default constructor called" << std::endl;
}

ScavTrap::ScavTrap(const std::string& name) : ClapTrap(name)
{
  Hit_points = 100;
  Energy_points = 50;
  Attack_damage = 20;
  std::cout << "ScavTrap " << name << " constructed" << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap " << name << " destroyed" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
    if (Hit_points == 0 || Energy_points == 0)
    {
        std::cout << "ScavTrap " << name << " can't attack (no hit points or energy points left)" << std::endl;
        return;
    }
    Energy_points--;

    std::cout << "ScavTrap " << name << " attacks " << target << ", causing " << Attack_damage << " points of damage!" << std::endl;
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << name << " is now in Gate keeper mode." << std::endl;
}
