/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taya <taya@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/09 10:38:06 by taya              #+#    #+#             */
/*   Updated: 2026/01/09 11:21:33 by taya             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include <iostream>

DiamondTrap::DiamondTrap() : ClapTrap("default_Clap_name"), ScavTrap(), FragTrap(), name("default"){
  Hit_points = FragTrap::Hit_points;
  Energy_points = ScavTrap::Energy_points;
  Attack_damage = FragTrap::Attack_damage;
  std::cout << "DiamondTrap default constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(const std::string& name) : ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name), name(name){
  Hit_points = FragTrap::Hit_points;
  Energy_points = ScavTrap::Energy_points;
  Attack_damage = FragTrap::Attack_damage;
  std::cout << "DiamondTrap " << name << " constructed" << std::endl;
}

DiamondTrap::~DiamondTrap(){
  std::cout << "DiamondTrap " << name << " destroyed" << std::endl;
}

void DiamondTrap::attack(const std::string& target)
{
  ScavTrap::attack(target);
}

void  DiamondTrap::whoAmI()
{
  std::cout << "DiamondTrap name: " << name << " | ClapTrap name: " << ClapTrap::name << std::endl;
}
