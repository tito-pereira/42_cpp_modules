/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 11:53:19 by marvin            #+#    #+#             */
/*   Updated: 2024/07/31 11:53:19 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Zombie.hpp"

int	atoi(std::string str) {
	int	nmb = 0;
	for (int i = 0; str[i] != '\0'; i++)
		nmb = (nmb * 10) + (str[i] - '0');
	return nmb;
}

bool	check_digit(std::string str) {
	for (int i = 0; str[i] != '\0'; i++) {
		if (!(str[i] >= '0' && str[i] <= '9'))
			return false;
	}
	return true;
}

int	main() {
	int	post_nmb;
	std::string	pre_nmb, name;
	while (1) {
		std::cout << "Please enter the number of zombies you want to create:" << std::endl;
		std::getline(std::cin, pre_nmb);
		if (!pre_nmb.empty() && check_digit(pre_nmb) == true)
			post_nmb = atoi(pre_nmb);
		if (post_nmb != 0)
			break;
		std::cout << "Invalid number." << std::endl;
	}
	std::cout << "Please enter the name you want to give these zombies:" << std::endl;
	std::getline(std::cin, name);
	Zombie *Horde = zombieHorde(post_nmb, name);
	delete[] Horde;
}
