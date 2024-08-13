/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 11:54:11 by marvin            #+#    #+#             */
/*   Updated: 2024/07/31 11:54:11 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Zombie.hpp"

Zombie* zombieHorde(int N, std::string name) {
	Zombie	*Horde = new Zombie[N];
	for (int i = 0; i < N; i++) {
		Horde[i].change_name(name);
		Horde[i].change_status(false);
		std::cout << name << std::flush;
		Horde[i].announce();
	}
	return Horde;
}
