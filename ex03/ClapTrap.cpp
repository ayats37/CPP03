/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taya <taya@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/09 10:37:57 by taya              #+#    #+#             */
/*   Updated: 2026/01/09 10:55:07 by taya             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap() : name(""), Hit_points(10), Energy_points(10), Attack_damage(0) {
  std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : name(name), Hit_points(10), Energy_points(10), Attack_damage(0) {
  std::cout << "ClapTrap " << name << " constructed" << std::endl;
}

ClapTrap::~ClapTrap(){
  std::cout << "ClapTrap " << name << " destroyed" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
  if (Hit_points <= 0 || Energy_points <= 0)
  {
    std::cout << "ClapTrap " << name << " can't attack (no hit points or energy points left)" << std::endl;
    return;
  }
  Energy_points--;
  std::cout << "ClapTrap " << name << " attacks " << target << ", causing " << Attack_damage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
  if (Hit_points <= 0)
  {
    std::cout << "ClapTrap " << name << " is already dead!" << std::endl;
  }
  if (amount >= Hit_points)
    Hit_points = 0;
  else
    Hit_points -= amount;
    std::cout << "ClapTrap " << name << " takes " << amount << " points of damage!" << std::endl;
}

void  ClapTrap::beRepaired(unsigned int amount)
{
  if (Hit_points <= 0 || Energy_points <= 0)
  {
    std::cout << "ClapTrap " << name << " can't be repaired (no hit points or energy points left)" << std::endl;
    return;
  }
  Energy_points--;
  Hit_points += amount;
  std::cout << "ClapTrap " << name << " repairs itself for " << amount << " hit points!" << std::endl;
}