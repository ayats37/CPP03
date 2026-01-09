/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taya <taya@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/09 10:38:11 by taya              #+#    #+#             */
/*   Updated: 2026/01/09 13:38:07 by taya             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <iostream>

FragTrap::FragTrap() : ClapTrap(){
  Hit_points = 100;
  Energy_points = 100;
  Attack_damage = 30;
  std::cout << "FragTrap default constructor called" << std::endl;
}

FragTrap::FragTrap(const std::string& name) : ClapTrap(name)
{
  Hit_points = 100;
  Energy_points = 100;
  Attack_damage = 30;
  std::cout << "FragTrap " << name << " constructed" << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap " << name << " destroyed" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap " << name << " requests a positive high five!" << std::endl;
}