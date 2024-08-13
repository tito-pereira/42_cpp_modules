/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 12:00:48 by marvin            #+#    #+#             */
/*   Updated: 2024/07/31 12:00:48 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Zombie.hpp"

Zombie*	newZombie(std::string name) {
	Zombie	*n_zombie = new Zombie;
	n_zombie->change_status(false);
    n_zombie->change_name(name);
	std::cout << name << std::flush;
	return n_zombie;
}
