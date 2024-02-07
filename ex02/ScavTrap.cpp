/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brmajor <brmajor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 15:24:07 by brmajor           #+#    #+#             */
/*   Updated: 2024/02/07 09:56:22 by brmajor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void): ClapTrap(), gateKeeper(false)
{
    this->_hp = 100;
    this->_ep = 50;
    this->_ad = 20;
    std::cout << "ScavTrap created with no name." << std::endl;
}

ScavTrap::ScavTrap(std::string input): ClapTrap(input), gateKeeper(false)
{
    this->_hp = 100;
    this->_ep = 50;
    this->_ad = 20;
    std::cout << "ScavTrap created. You named him " << this->_name << "." << std::endl;
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
        this->_name = ref._name;
        this->_hp = ref._hp;
        this->_ep = ref._ep;
        this->_ad = ref._ad;
    }
    return (*this);
}

ScavTrap::~ScavTrap(void)
{
    std::cout << "ScavTrap " << this->_name << " was destroyed." << std::endl;
}

void    ScavTrap::attack(const std::string& target)
{

    if (this->_ep > 0 && this->_hp > 0)
    {
        std::cout << "ScavTrap " << this->_name << " attacks " << target << " for "
        << this->_ad << " points of damage." << std::endl;
        this->_ep--;
    }
    else
    {
        std::cout << this->_name << " can't attack because he is out of EP or HP." << std::endl;
    }
}

void    ScavTrap::guardGate(void)
{
    if (this->gateKeeper == false)
    {
        this->gateKeeper = true;
        std::cout << "ScavTrap " << this->_name << " is now in Gatekeeper mode." << std::endl;    
    }
    else
    {
        this->gateKeeper = false;
        std::cout << "ScavTrap " << this->_name << " is no longer in Gatekeeper mode." << std::endl;
    }   
}