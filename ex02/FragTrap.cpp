/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brmajor <brmajor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 16:12:29 by brmajor           #+#    #+#             */
/*   Updated: 2024/02/02 12:48:29 by brmajor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(): ClapTrap()
{
    this->HP = 100;
    this->EP = 100;
    this->AD = 30;
    std::cout << "FragTrap created with no name" << std::endl;
}

FragTrap::FragTrap(std::string input): ClapTrap(input)
{
    this->HP = 100;
    this->EP = 100;
    this->AD = 30;
    std::cout << "FragTrap created. You named him " << this->Name << "." << std::endl;
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
        this->Name = ref.Name;
        this->HP = ref.HP;
        this->EP = ref.EP;
        this->AD = ref.AD;
    }
    return (*this);
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap " << this->Name << " was destroyed." << std::endl;
}

void    FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap " << this->Name << " wants to give you a high five. Don't leave him hanging!" << std::endl;
}