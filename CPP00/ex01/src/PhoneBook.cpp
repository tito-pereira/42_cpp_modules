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
		if (!this->contact_lst[i].p_info.first_name.empty())
			this->contact_lst[i + 1] = this->contact_lst[i];
	}
	this->contact_lst[0].change_info(p_info);
}

int	PhoneBook::search_one(int index) {
	if (this->contact_lst[index].p_info.first_name.empty()
		|| !(index >= 0 && index <= 7)) {
		std::cout << "Non-existent contact." << std::endl;
		return 0;
		}
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

void	all_zeros(int *f, int *l, int *n, int *done_flag, int *iter) {
	*f = -1;
	*l = -1;
	*n = -1;
	*done_flag = 0;
	*iter = 0;
}

void	column_writer(int *count, std::string str) {
	for (int i = 0; i < 10; i++) {
		if ((*count) != -2) {
			if (str[++(*count)] && i < 9)
				std::cout << str[*count] << std::flush;
			else if (str[*count] && str[*count] && i == 9)
				std::cout << '.' << std::flush;
			else {
				std::cout << ' ' << std::flush;
				(*count) = -2;
			}
		}
		else
			std::cout << ' ' << std::flush;
	}
}

void	PhoneBook::search_all() {
	std::cout << "Index     |First Name|Last Name |Nickname  |" << std::endl;
	int	f = 0, l = 0, n = 0, done_flag = 0, iter = 0, total = -1;
	while (!this->contact_lst[++total].p_info.first_name.empty())
		continue;
	total--;
	for (int i = 0; i <= total; i++) {
		all_zeros(&f, &l, &n, &done_flag, &iter);
		while (done_flag != 1) {
			for (int j = 0; j < 10; j++) {
				if (j == 4 && iter == 0)
					std::cout << i << std::flush;
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
			if (f == -2 && l == -2 && n == -2)
				done_flag = 1;
		}
	}
}
