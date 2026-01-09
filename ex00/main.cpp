/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taya <taya@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/09 10:36:51 by taya              #+#    #+#             */
/*   Updated: 2026/01/09 10:36:52 by taya             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
  ClapTrap a("Aya");

  a.attack("monster");
  a.takeDamage(5);
  a.beRepaired(3);

  a.attack("enemy");
  a.takeDamage(20);
  a.attack("bichbich");
  a.beRepaired(5);

  return 0;
}