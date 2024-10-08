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

#include "../include/Zombie.hpp"

int	main() {
	std::string	input;
	std::cout << "You will now test 2 ways of creating zombies"<< std::endl;
	std::cout << "Please type a name for a zombie:" << std::endl;
	std::cin >> input;
	if (input.empty())
		return (EXIT_FAILURE);
	std::cout << "\nFirst, "<<input<<" will be allocated dynamically in the heap" << std::endl;
	Zombie	*n_zombie = NULL;
	n_zombie = newZombie(input);
	n_zombie->announce();
	std::cout << "\nNow, "<<input<<" will be allocated locally in the stack" << std::endl;
	randomChump(input);
	std::cout << std::endl;
	delete	n_zombie;
	return (EXIT_SUCCESS);
}
