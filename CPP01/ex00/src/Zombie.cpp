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

#include "../include/Zombie.hpp"

Zombie::Zombie() {}

Zombie::~Zombie() {
	if (local == false)
		std::cout<<this->name<<": dinamically allocated zombie will die now"<<std::endl;
	else
		std::cout<<this->name<<": locally allocated zombie will die now"<<std::endl;
}

void	Zombie::announce(void) {
	std::cout << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::change_name(std::string new_name) {
	this->name = new_name;
}

void	Zombie::change_status(bool status) {
	this->local = status;
}
