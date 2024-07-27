/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/26 22:50:18 by marvin            #+#    #+#             */
/*   Updated: 2024/07/26 22:50:18 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "megaphone.hpp"

namespace   Megaphone {
    ez;
}

int main(int argc, char **argv) {
    if (argc == 1) {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return 0;
	}
	for (int i = 0; argv[i]; i++) {
		for (int j = 0; argv[i][j] != '\0'; j++) {
			if (argv[i][j] >= 'a' && argv[i][j] <= 'z')
				std::cout << argv[i][j] + 32 << std::endl;
			else
				std::cout << argv[i][j] << std::endl;
		}
	}
	return 1;
}