/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 11:53:35 by marvin            #+#    #+#             */
/*   Updated: 2024/07/31 11:53:35 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <cstdlib>
#include <string>

class Zombie
{
private:
    std::string name;
    bool    	local;
public:
    Zombie();
    ~Zombie();
	void	announce(void);
	void	change_name(std::string new_name);
    void	change_status(bool status);
};

Zombie* zombieHorde(int N, std::string name);

#endif