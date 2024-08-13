/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 00:43:57 by marvin            #+#    #+#             */
/*   Updated: 2024/07/31 00:43:57 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <cstdlib>

class Zombie
{
private:
    std::string name;
    bool    local;
public:
    Zombie();
    ~Zombie();
	void	announce(void);
	void	change_name(std::string new_name);
    void	change_status(bool status);
};

Zombie*	newZombie(std::string name);
void	randomChump(std::string name);

#endif
