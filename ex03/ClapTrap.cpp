/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taya <taya@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/09 10:36:45 by taya              #+#    #+#             */
/*   Updated: 2026/01/11 10:59:48 by taya             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap() : _name("Default"),_hitPoints(10), _energyPoints(10), _attackDamage(0) {
  std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap(const std::string& name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0) {
  std::cout << "ClapTrap " << name << " constructed" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other)
    : _name(other._name),
      _hitPoints(other._hitPoints),
      _energyPoints(other._energyPoints),
      _attackDamage(other._attackDamage)
{
    std::cout << "ClapTrap copy constructor called" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
    std::cout << "ClapTrap copy assignment operator called" << std::endl;
    if (this != &other) {
        _name = other._name;
        _hitPoints = other._hitPoints;
        _energyPoints = other._energyPoints;
        _attackDamage = other._attackDamage;
    }
    return *this;
}

ClapTrap::~ClapTrap(){
  std::cout << "ClapTrap " << _name << " destroyed" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
  if (_hitPoints == 0)
  {
    std::cout << "ClapTrap " << _name << " has no hit points left" << std::endl;
    return;
  }
  if (_energyPoints == 0)
  {
    std::cout << "ClapTrap " << _name << " has no energy points left" << std::endl;
    return;
  }
  _energyPoints--;
  std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
  if (_hitPoints == 0)
  {
    std::cout << "ClapTrap " << _name << " is already dead!" << std::endl;
    return;
  }
  if (amount >= _hitPoints)
    _hitPoints = 0;
  else
    _hitPoints -= amount;
    
  std::cout << "ClapTrap " << _name << " takes " << amount << " points of damage!" << std::endl;
}

void  ClapTrap::beRepaired(unsigned int amount)
{
  if (_hitPoints == 0)
  {
    std::cout << "ClapTrap " << _name << " has no hit points left" << std::endl;
    return;
  }
  if (_energyPoints == 0)
  {
    std::cout << "ClapTrap " << _name << " has no energy points left" << std::endl;
    return;
  }
  _energyPoints--;
  _hitPoints += amount;
  std::cout << "ClapTrap " << _name << " repairs itself for " << amount << " hit points!" << std::endl;
}
const std::string& ClapTrap::getName() const { return _name; }
unsigned int ClapTrap::getHitPoints() const { return _hitPoints; }
unsigned int ClapTrap::getEnergyPoints() const { return _energyPoints; }
unsigned int ClapTrap::getAttackDamage() const { return _attackDamage; }