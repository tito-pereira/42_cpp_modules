/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 00:43:45 by marvin            #+#    #+#             */
/*   Updated: 2024/07/31 00:43:45 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(false) : flag(false) {}

Zombie::~Zombie() {
	std::cout << "will die now" << name << std::endl;
	if (flag == true)
		delete this->name;
}

void	Zombie::announce(void) {
	std::cout << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::change_name(std::string new_name) {
	this->name = new_name;
}
