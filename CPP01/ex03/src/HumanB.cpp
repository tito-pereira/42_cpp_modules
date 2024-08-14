/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 20:09:25 by marvin            #+#    #+#             */
/*   Updated: 2024/08/13 20:09:25 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/HumanB.hpp"

HumanB::HumanB(std::string n_name) : name(n_name) {}

HumanB::~HumanB() {}

void	HumanB::setWeapon(Weapon new_type) {
	this->gun.setType(new_type.getType());
}

void	HumanB::attack() {
	std::cout << this->name << " attacks with their " << this->gun.getType() << std::endl;
}
