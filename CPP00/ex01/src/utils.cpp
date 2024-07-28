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