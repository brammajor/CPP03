/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brmajor <brmajor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 15:24:21 by brmajor           #+#    #+#             */
/*   Updated: 2024/02/01 15:24:22 by brmajor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
    ClapTrap    ClapTrap("TestName");

    for (int i = 4; i > 0; i--)
    {
        ClapTrap.attack("TestEnemy");
    }
    for (int i = 3; i > 0; i--)
    {
        ClapTrap.takeDamage(4);
    }
    ClapTrap.takeDamage(3);
    ClapTrap.attack("TestEnemy");
    for (int i = 7; i > 0; i--)
    {
        ClapTrap.beRepaired(1);
    }
}