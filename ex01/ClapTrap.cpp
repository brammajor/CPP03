/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brmajor <brmajor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 15:24:28 by brmajor           #+#    #+#             */
/*   Updated: 2024/02/07 09:54:08 by brmajor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void):   _name("void"), _hp(10), _ep(10), _ad(0)
{
    std::cout << "ClapTrap created with no name." << std::endl;
}

ClapTrap::ClapTrap(std::string input):  _name(input), _hp(10), _ep(10), _ad(0)
{
    std::cout << "ClapTrap was created. You named him " << this->_name << "." << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &ref)
{
    std::cout << "ClapTrap copied." << std::endl;
    *this = ref;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &ref)
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

void    ClapTrap::attack(const std::string& target)
{
    if (this->_ep > 0 && this->_hp > 0)
    {
        std::cout << this->_name << " attacks " << target << " for " << this->_ad << " points of damage!" << std::endl;
        this->_ep--;
    }
    else
    {
        std::cout << this->_name << " can't attack because he is out of EP or HP." << std::endl;
    }
}

void    ClapTrap::takeDamage(unsigned int amount)
{
    if (this->_hp == 0)
    {
        std::cout << this->_name << "'s lifeless body is beaten even further." << std::endl;
    }
    else
    {
        std::cout << this->_name << " is attacked! He takes " << amount <<
        " points of damage" << std::endl;
        this->_hp -= amount;
        if (this->_hp < 0)
            this->_hp = 0;
        std::cout << "His new total is: " << this->_hp << " Hit Points." << std::endl;
        if (this->_hp <= 0)
        {
            std::cout << this->_name << " falls to his knees and shuts down." << std::endl;
            this->_hp = 0;
        }
    }
}

void    ClapTrap::beRepaired(unsigned int amount)
{
    if (this->_hp == 0 && this->_ep > 0)
    {
        std::cout << this->_name << " is rebooted and ready for more action." << std::endl;
        this->_hp = amount;
        std::cout << "He is now back to " << amount << " Hit Points." << std::endl;
        this->_ep--;
    }
    else if (this->_hp == 100)
    {
        std::cout << this->_name << " is already at maximum Hit Points." << std::endl;
    }
    else if (this->_hp < 100 && this->_ep > 0)
    {
        std::cout << this->_name << " is repaired and restores " << amount << " Hit Points." << std::endl;
        this->_hp += amount;
        if (this->_hp > 100)
            this->_hp = 100;
        std::cout << "His new total is: " << this->_hp << " Hit Points." << std::endl;
        this->_ep--;
    }
    else
    {
        std::cout << this->_name << " can't be repaired because he is out of Energy Points." << std::endl;
    }
}

ClapTrap::~ClapTrap()
{
    std::cout << this->_name << " was destroyed." << std::endl;
}