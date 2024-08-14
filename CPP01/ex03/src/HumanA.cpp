/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 20:09:28 by marvin            #+#    #+#             */
/*   Updated: 2024/08/13 20:09:28 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/HumanA.hpp"

HumanA::HumanA(std::string n_name, Weapon n_gun) : name(n_name) , gun(n_gun) {}

HumanA::~HumanA () {}

void	HumanA::attack() {
	std::cout << this->name << " attacks with their " << this->gun.getType() << std::endl;
}
