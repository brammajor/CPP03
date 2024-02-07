/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brmajor <brmajor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 16:12:29 by brmajor           #+#    #+#             */
/*   Updated: 2024/02/07 09:59:05 by brmajor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(): ClapTrap()
{
    this->_hp = 100;
    this->_ep = 100;
    this->_ad = 30;
    std::cout << "FragTrap created with no name" << std::endl;
}

FragTrap::FragTrap(std::string input): ClapTrap(input)
{
    this->_hp = 100;
    this->_ep = 100;
    this->_ad = 30;
    std::cout << "FragTrap created. You named him " << this->_name << "." << std::endl;
}

FragTrap::FragTrap(const FragTrap &ref)
{
    std::cout << "FragTrap copied." << std::endl;
    *this = ref;
}

FragTrap &FragTrap::operator=(const FragTrap &ref)
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

FragTrap::~FragTrap()
{
    std::cout << "FragTrap " << this->_name << " was destroyed." << std::endl;
}

void    FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap " << this->_name << " wants to give you a high five. Don't leave him hanging!" << std::endl;
}