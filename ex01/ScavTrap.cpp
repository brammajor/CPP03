/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brmajor <brmajor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 15:24:07 by brmajor           #+#    #+#             */
/*   Updated: 2024/02/02 12:47:43 by brmajor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void): ClapTrap(), gateKeeper(false)
{
    this->HP = 100;
    this->EP = 50;
    this->AD = 20;
    std::cout << "ScavTrap created with no name." << std::endl;
}

ScavTrap::ScavTrap(std::string input): ClapTrap(input), gateKeeper(false)
{
    this->HP = 100;
    this->EP = 50;
    this->AD = 20;
    std::cout << "ScavTrap created. You named him " << this->Name << "." << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &ref)
{
    std::cout << "ScavTrap copied." << std::endl;
    *this = ref;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &ref)
{
    if (this != &ref)
    {
        this->Name = ref.Name;
        this->HP = ref.HP;
        this->EP = ref.EP;
        this->AD = ref.AD;
    }
    return (*this);
}

ScavTrap::~ScavTrap(void)
{
    std::cout << "ScavTrap " << this->Name << " was destroyed." << std::endl;
}

void    ScavTrap::attack(const std::string& target)
{

    if (this->EP > 0 && this->HP > 0)
    {
        std::cout << "ScavTrap " << this->Name << " attacks " << target << " for "
        << this->AD << " points of damage." << std::endl;
        this->EP--;
    }
    else
    {
        std::cout << this->Name << " can't attack because he is out of EP or HP." << std::endl;
    }
}

void    ScavTrap::guardGate(void)
{
    if (this->gateKeeper == false)
    {
        this->gateKeeper = true;
        std::cout << "ScavTrap " << this->Name << " is now in Gatekeeper mode." << std::endl;    
    }
    else
    {
        this->gateKeeper = false;
        std::cout << "ScavTrap " << this->Name << " is no longer in Gatekeeper mode." << std::endl;
    }   
}