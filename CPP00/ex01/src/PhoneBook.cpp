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

void    PhoneBook::add_person(PersonInfo p_info) {
	for (int i = 6; i >= 0; i--) {
		if (this->contact_lst[i].p_info.first_name)
			this->contact_lst[i + 1] = this->contact_lst[i];
	}
	this->contact_lst[0].change_info(p_info);
}

int	PhoneBook::search_one(int index) {
	//if (this->contact_lst[index].p_info.first_name) ///
		//std::cout << "why does this exist?" <<std::endl; ///
	char	*check = this->contact_lst[index].p_info.first_name;
	if (!check)
		return 0;
	else {
		std::cout << "First Name:" << std::endl;
		std::cout << this->contact_lst[index].p_info.first_name << std::endl;
		std::cout << "Last Name:" << std::endl;
		std::cout << this->contact_lst[index].p_info.last_name << std::endl;
		std::cout << "Nickname:" << std::endl;
		std::cout << this->contact_lst[index].p_info.nickname << std::endl;
		std::cout << "Phone Number:" << std::endl;
		std::cout << this->contact_lst[index].p_info.number << std::endl;
		std::cout << "Darkest Secret:" << std::endl;
		std::cout << this->contact_lst[index].p_info.secret << std::endl;
	}
	return 1;
}

/*
olha nao sei crl
ou uso std::string e .empty()
ou nao sei pqp a merda desta linguagem
*/

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
	for (int i = 0; this->contact_lst[i].p_info.first_name; i++) {
		all_zeros(&f, &l, &n, &done_flag, &iter);
		while (done_flag != 1) {
			for (int j = 0; j < 10; j++) {
				if (j == 4 && iter == 0)
					std::cout << j << std::flush;
				else
					std::cout << ' ' << std::flush;
			}
			std::cout << '|' << std::flush;
			column_writer(&f, this->contact_lst[i].p_info.first_name);
			std::cout << '|' << std::flush;
			column_writer(&l, this->contact_lst[i].p_info.last_name);
			std::cout << '|' << std::flush;
			column_writer(&n, this->contact_lst[i].p_info.nickname);
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