/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taya <taya@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/09 10:38:08 by taya              #+#    #+#             */
/*   Updated: 2026/01/09 13:38:16 by taya             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP 

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include <string>

class DiamondTrap : public ScavTrap, public FragTrap
{
  private :
    std::string name;
  public :
    DiamondTrap();
    DiamondTrap(const std::string& name);
    ~DiamondTrap();
    
    void attack(const std::string& target);
    void whoAmI();

};


#endif