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

#include "../includes/PhoneBook.hpp"

PhoneBook::PhoneBook() {}

PhoneBook::~PhoneBook() {}

void	Phonebook::add_person(PersonInfo p_info) {
	for (int i = 6; i >= 0; i--) {
		if (PhoneBook::contact_lst[i]::first_name)
			PhoneBook::contact_lst[i + 1] = PhoneBook::contact_lst[i];
	}
	PhoneBook::contact_lst[0]::change_info(p_info);
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

void	all_zeros(int *f, int *l, int *n, int *done_flag, int *iter) {
	*f = 0;
	*l = 0;
	*n = 0;
	*done_flag = 0;
	*iter = 0;
}

void	column_writer(int *count, char *str) {
	for (int i = 0; i < 10; i++) {
		if ((*count) != -1) {
			if (str[++(*count)] && i < 9)
				std::cout << str[*count] << std::flush;
			else if (str[*count] && str[*count] && i == 9)
				std::cout << '.' << std::flush;
			else {
				std::cout << ' ' << std::flush;
				(*count) = -1;
			}
		}
		else
			std::cout << ' ' << std::flush;
	}
}

void	PhoneBook::search_all() {
	std::cout << "Index     |First Name|Last Name |Nickname  |" << std::endl;
	int	f = 0, l = 0, n = 0, done_flag = 0, iter = 0;
	for (int i = 0; PhoneBook::contact_lst[i]::first_name; i++) {
		all_zeros(&f, &l, &n, &done_flag; &iter);
		while (done_flag != 1) {
			for (int j = 0; j < 10; j++) {
				if (j == 4 && iter == 0)
					std::cout << j << std::flush;
				else
					std::cout << ' ' << std::flush;
			}
			std::cout << '|' << std::flush;
			column_writer(&f, PhoneBook::contact_lst[i]::first_name);
			std::cout << '|' << std::flush;
			column_writer(&l, PhoneBook::contact_lst[i]::last_name);
			std::cout << '|' << std::flush;
			column_writer(&n, PhoneBook::contact_lst[i]::nickname);
			std::cout << '|' << std::endl;
			iter++;
			if (f == -1 && l == -1 && n == -1)
				done_flag = 1;
		}
	}
}

/*
Display the saved contacts as a list of 4 columns: index, first name, last
name and nickname.
◦ Each column must be 10 characters wide. A pipe character (’|’) separates
them. The text must be right-aligned. If the text is longer than the column,
it must be truncated and the last displayable character must be replaced by a
dot (’.’).

-> right aligned?
#include <cstdlib> // For std::getenv
#include <iomanip> // For std::setw

-> substituir :: por . naquelas triple access

for (int b = 0; b < 10; b++) {
	if (PhoneBook::contact_lst[i]::first_name[b] && b < 9)
		std::cout << PhoneBook::contact_lst[i]::first_name[b] << std::flush;
	else if (PhoneBook::contact_lst[i]::first_name[b]
		&& PhoneBook::contact_lst[i]::first_name[b] && b == 9) {
		std::cout << '.' << std::flush;
		repeat_flag = 1;
	}
	else
		std::cout << ' ' << std::flush;
}
*/