/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 20:09:31 by marvin            #+#    #+#             */
/*   Updated: 2024/08/13 20:09:31 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Weapon.hpp"

Weapon::Weapon() {
	this->type = "";
}

Weapon::Weapon(std::string name) : type(name) {}

Weapon::~Weapon() {}

const std::string&	Weapon::getType() const {
	const std::string &ref = this->type;
	return ref;
}

void	Weapon::setType(std::string new_type) {
	this->type = new_type;
}
