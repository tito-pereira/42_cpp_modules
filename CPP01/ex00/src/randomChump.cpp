/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 12:01:07 by marvin            #+#    #+#             */
/*   Updated: 2024/07/31 12:01:07 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Zombie.hpp"

void	randomChump(std::string name) {
	Zombie	n_zombie;
	std::cout << name << std::flush;
    n_zombie.change_name(name);
	n_zombie.announce();
    std::cout << "Statically allocated " << n_zombie.get_name() << " will die now" << std::endl;
}