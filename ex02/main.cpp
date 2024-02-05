/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brmajor <brmajor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 16:11:55 by brmajor           #+#    #+#             */
/*   Updated: 2024/02/02 10:07:36 by brmajor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
    FragTrap    obj1;
    FragTrap    obj2("Seba");

    obj1.attack("strong opponent");
    obj2.attack("goblin");
    obj1.takeDamage(27);
    obj2.takeDamage(49);
    obj1.beRepaired(8);
    obj2.beRepaired(16);
    obj2.highFivesGuys();
}