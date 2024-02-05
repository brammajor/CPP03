/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brmajor <brmajor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 15:24:28 by brmajor           #+#    #+#             */
/*   Updated: 2024/02/02 12:45:58 by brmajor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void):   Name("void"), HP(10), EP(10), AD(0)
{
    std::cout << "ClapTr created with no name." << std::endl;
}

ClapTrap::ClapTrap(std::string input):  Name(input), HP(10), EP(10), AD(0)
{
    std::cout << "ClapTrap was created!\nYou named him " << this->Name << "." << std::endl;
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
        this->Name = ref.Name;
        this->HP = ref.HP;
        this->EP = ref.EP;
        this->AD = ref.AD;
    }
    return (*this);
}

void    ClapTrap::attack(const std::string& target)
{
    if (this->EP > 0 && this->HP > 0)
    {
        std::cout << this->Name << " attacks " << target << " for " << this->AD << " points of damage!" << std::endl;
        this->EP--;
    }
    else
    {
        std::cout << this->Name << " can't attack because he is out of EP or HP." << std::endl;
    }
}

void    ClapTrap::takeDamage(unsigned int amount)
{
    if (this->HP == 0)
    {
        std::cout << this->Name << "'s lifeless body is beaten even further." << std::endl;
    }
    else
    {
        std::cout << this->Name << " is attacked! He takes " << amount <<
        " points of damage" << std::endl;
        this->HP -= amount;
        if (this->HP < 0)
            this->HP = 0;
        std::cout << "His new total is: " << this->HP << " Hit Points." << std::endl;
        if (this->HP <= 0)
        {
            std::cout << this->Name << " falls to his knees and shuts down." << std::endl;
            this->HP = 0;
        }
    }
}

void    ClapTrap::beRepaired(unsigned int amount)
{
    if (this->HP == 0 && this->EP > 0)
    {
        std::cout << this->Name << " is rebooted and ready for more action." << std::endl;
        this->HP = amount;
        std::cout << "He is now back to " << amount << " Hit Points." << std::endl;
        this->EP--;
    }
    else if (this->HP == 10)
    {
        std::cout << this->Name << " is already at maximum Hit Points." << std::endl;
    }
    else if (this->HP < 10 && this->EP > 0)
    {
        std::cout << this->Name << " is repaired and restores " << amount << " Hit Points." << std::endl;
        this->HP += amount;
        if (this->HP > 10)
            this->HP = 10;
        std::cout << "His new total is: " << this->HP << " Hit Points." << std::endl;
        this->EP--;
    }
    else
    {
        std::cout << this->Name << " can't be repaired because he is out of Energy Points." << std::endl;
    }
}

ClapTrap::~ClapTrap()
{
    std::cout << this->Name << " was destroyed." << std::endl;
}