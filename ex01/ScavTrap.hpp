/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brmajor <brmajor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 15:24:02 by brmajor           #+#    #+#             */
/*   Updated: 2024/02/02 12:47:29 by brmajor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

class ScavTrap: public ClapTrap
{
private:
bool    gateKeeper;
public:
ScavTrap(void);
ScavTrap(std::string input);
ScavTrap(const ScavTrap &ref);
ScavTrap &operator=(const ScavTrap &ref);
~ScavTrap(void);
void    attack(const std::string& target);
void    guardGate(void);
};

#endif