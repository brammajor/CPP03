/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brmajor <brmajor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 16:12:00 by brmajor           #+#    #+#             */
/*   Updated: 2024/02/07 10:01:16 by brmajor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
    ClapTrap    obj("Bob");
    ScavTrap    obj1;
    ScavTrap    obj2("Gerrie");

    obj.attack("bad man");
    obj1.attack("strong opponent");
    obj2.attack("goblin");
    obj1.takeDamage(27);
    obj2.takeDamage(49);
    obj1.beRepaired(8);
    obj2.beRepaired(16);
    obj2.guardGate();
    obj2.guardGate();
}