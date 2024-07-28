/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 15:30:31 by marvin            #+#    #+#             */
/*   Updated: 2024/07/28 15:30:31 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook() {}

PhoneBook::~PhoneBook() {}

void	Phonebook::add_person(PersonInfo p_info) {
	for (int i = 6; i >= 0; i--) {
		if (PhoneBook::contact_lst[i]::first_name)
			PhoneBook::contact_lst[i + 1] = PhoneBook::contact_lst[i];
	}
	PhoneBook::contact_lst[0]::change_info(p_info);
}

void	PhoneBook::search_all() {
	std::cout << "Index     |First Name|Last Name |Nickname  |" << std::endl;
	int	f = 0, l = 0, n = 0, repeat_flag = 0;
	//while (PhoneBook::contact_lst[i])
	for (int i = 0; PhoneBook::contact_lst[i]::first_name; i++) {
		for (int a = 0; a < 10; a++) {
			if (a == 0 && repeat_flag == 0)
				std::cout << i << std::flush;
			else
				std::cout << ' ' << std::flush;
		}
		std::cout << '|' << std::flush;
		for (int b = 0; b < 10; b++) {
			if (a == 0) //mais algo
				std::cout << i << std::flush;
			else
				std::cout << ' ' << std::flush;
		}
		std::cout << '|' << std::flush;
		for (int c = 0; c < 10; c++) {
			if (a == 0) //mais algo
				std::cout << i << std::flush;
			else
				std::cout << ' ' << std::flush;
		}
		std::cout << '|' << std::flush;
		for (int d = 0; d < 10; d++) {
			if (a == 0) //mais algo
				std::cout << i << std::flush;
			else
				std::cout << ' ' << std::flush;
		}
		std::cout << '|' << std::endl;
	}
}

int	PhoneBook::search_one(int index) {
	if (!PhoneBook::contact_lst[index]::first_name)
		return 0;
	else {
		std::cout << "First Name:" << std::endl;
		std::cout << PhoneBook::contact_lst[index]::first_name << std::endl;
		std::cout << "Last Name:" << std::endl;
		std::cout << PhoneBook::contact_lst[index]::last_name << std::endl;
		std::cout << "Nickname:" << std::endl;
		std::cout << PhoneBook::contact_lst[index]::nickname << std::endl;
		std::cout << "Phone Number:" << std::endl;
		std::cout << PhoneBook::contact_lst[index]::number << std::endl;
		std::cout << "Darkest Secret:" << std::endl;
		std::cout << PhoneBook::contact_lst[index]::secret << std::endl;
	}
	return 1;
}

/*
Display the saved contacts as a list of 4 columns: index, first name, last
name and nickname.
◦ Each column must be 10 characters wide. A pipe character (’|’) separates
them. The text must be right-aligned. If the text is longer than the column,
it must be truncated and the last displayable character must be replaced by a
dot (’.’).

Index     |First Name|Last Name |Nickname  |

int	a = 0, b = 0, c = 0, d = 0;
b
c
d

-> right aligned?

-> substituir :: por . naquelas triple access
*/