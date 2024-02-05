/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brmajor <brmajor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 16:13:06 by brmajor           #+#    #+#             */
/*   Updated: 2024/02/02 12:48:18 by brmajor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

class FragTrap: public ClapTrap
{
private:

public:
    FragTrap();
    FragTrap(std::string name);
    FragTrap(const FragTrap &ref);
    FragTrap &operator=(const FragTrap &ref);
    ~FragTrap();
    void    highFivesGuys(void);
};

#endif