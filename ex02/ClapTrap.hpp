/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brmajor <brmajor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 15:24:04 by brmajor           #+#    #+#             */
/*   Updated: 2024/02/02 12:47:13 by brmajor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

class   ClapTrap
{
protected:
std::string Name;
int         HP;
int         EP;
int         AD;
public:
ClapTrap(void);
ClapTrap(std::string input);
ClapTrap(const ClapTrap &ref);
ClapTrap &operator=(const ClapTrap &ref);
void    attack(const std::string& target);
void    takeDamage(unsigned int amount);
void    beRepaired(unsigned int amount);
virtual ~ClapTrap();
};

#endif