/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 18:07:35 by marvin            #+#    #+#             */
/*   Updated: 2024/07/27 18:07:35 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../includes/Contact.hpp"
#include "../includes/PhoneBook.hpp"

int	my_strcmp(char *s1, const char *s2) {
	int	i = -1;
	while (s1[++i]) {
		if (!s2[i] || s1[i] != s2[i])
			return 0;
	}
	if (s2[i])
		return 0;
	return 1;
}

void	main_add(PhoneBook phone_bk) {
	char		*input = NULL;
	PersonInfo	p_info;
	std::cout << "first name" << std::endl;
	std::cin >> input;
	p_info.first_name = input;
	std::cout << "last name" << std::endl;
	std::cin >> input;
	p_info.last_name = input;
	std::cout << "nickname" << std::endl;
	std::cin >> input;
	p_info.nickname = input;
	std::cout << "number" << std::endl;
	std::cin >> input;
	p_info.number = input;
	std::cout << "secret" << std::endl;
	std::cin >> input;
	p_info.secret = input;
	phone_bk.add_person(p_info);
}

void	main_search(PhoneBook phone_bk) {
	char	*index = NULL;
	std::cout << "type index from 0 to 8:" << std::endl;
	std::cin >> index;
	if (index[1] || (index[0] && index[0] < '0' && index[0] > '7'))
		std::cout << "Invalid index." << std::endl;
	else
		phone_bk.search_one((int)index[0]);
}

void    cmd_central(PhoneBook phone_bk, char *input) {
    if (my_strcmp(input, "ADD") == 1)
        main_add(phone_bk);
    else if (my_strcmp(input, "SEARCH") == 1)
        main_search(phone_bk);
	else
		std::cout << "Invalid command." << std::endl;
}

int main() {
    static	PhoneBook   phone_bk;
    char        		*input = NULL;
    while (1) {
        std::cout << "--------------- My Awesome Phonebook ---------------" << std::endl;
        std::cout << "Type, in capital letters, the command to run next:" << std::endl;
        std::cout << "ADD\nSEARCH\nEXIT" << std::endl;
        std::cin >> input;
        if (my_strcmp(input, "EXIT") == 1)
            return 0;
        else
            cmd_central(phone_bk, input);
    }
}