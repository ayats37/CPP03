/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taya <taya@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/09 10:38:26 by taya              #+#    #+#             */
/*   Updated: 2026/01/09 13:37:31 by taya             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"
#include <string>

class ScavTrap :  virtual public ClapTrap
{
  public :
    ScavTrap();
    ScavTrap(const std::string& name);
    ~ScavTrap();

    void attack(const std::string& target);
    void guardGate();  
};


#endif