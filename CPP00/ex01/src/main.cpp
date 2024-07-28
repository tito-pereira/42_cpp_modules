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
#include "Contact.hpp"
#include "PhoneBook.hpp"

Contact::Contact() : first_name(nullptr), last_name(nullptr), nickname(nullptr),
number(nullptr), secret(nullptr) {}

PhoneBook::PhoneBook() {}

int	PhoneBook::search_info(int index) {
	if (!PhoneBook::contact_lst[index]::first_name)
		return 0;
	else {
		//code;
		//tem aquele special format;
		std::cout << "" << std::endl;
	}
	return 1;
}

void	phbk_add(phone_bk) {
	ez;
}

void	phbk_search(phone_bk) {
	char	*index;
	std::cout << "type index from 0 to 8:" << std::endl;
	std::cin >> index;
	if (valid_index(index) != -1)
		phone_bk::search_info(valid_index(index));
	else
		std::cout << "Invalid index." << std::endl;
}

int	my_strcmp(char *s1, char *s2) {
	int	i = -1;
	while (s1[++i]) {
		if (!s2[i] || s1[i] != s2[i])
			return 0;
	}
	if (s2[i])
		return 0;
	return 1;
}

void    cmd_central(PhoneBook phone_bk, char *input) {
    if (my_strcmp(input, "ADD") == 1)
        phbk_add(phone_bk);
    else if (my_strcnmp(input, "SEARCH") == 1)
        phbk_search(phone_bk);
	else
		std::cout << "Invalid command." << std::endl;
}

int main() {
    PhoneBook   phone_bk;
    char        *input;
    while (1) {
        std::cout << "---------- My Awesome Phonebook ----------" << std::endl;
        std::cout << "Type, in capital letters, the command to run next:" << std::endl;
        std::cout << "ADD\nSEARCH\nEXIT" << std::endl;
        std::cin >> input;
        if (my_strcmp(input, "EXIT") == 1)
            exit(EXIT_SUCCESS);
        else
            cmd_central(phone_bk);
    }
}