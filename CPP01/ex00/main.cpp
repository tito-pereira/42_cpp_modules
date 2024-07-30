/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 00:43:37 by marvin            #+#    #+#             */
/*   Updated: 2024/07/31 00:43:37 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	newZombie(std::string name) {
	Zombie	*n_zombie = new Zombie;
	std::cout << name << std::endl;
	n_zombie.announce();
	n_zombie.change_name(name);
	n_zombie.flag = true;
	return n_zombie;
}

void	randomChump(std::string name) {
	Zombie	n_zombie;
	std::cout << name << std::endl;
	n_zombie.announce();
	n_zombie.change_name(name);
}

/*
Zombie* newZombie( std::string name );
It creates a zombie, name it, and return it so you can use it outside of the function
scope.
• void randomChump( std::string name );
It creates a zombie, name it, and the zombie announces itself
*/