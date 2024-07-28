/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 16:44:43 by marvin            #+#    #+#             */
/*   Updated: 2024/07/28 16:44:43 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact() : p_info::first_name(nullptr), p_info::last_name(nullptr),
p_info::nickname(nullptr), p_info::number(nullptr), p_info::secret(nullptr) {}

Contact::~Contact() {}

static void    Contact::change_info(PersonInfo new_info) {
    Contact::p_info::first_name = new_info::first_name;
    Contact::p_info::last_name = new_info::last_name;
    Contact::p_info::nickname = new_info::nickname;
    Contact::p_info::number = new_info::number;
    Contact::p_info::secret = new_info::secret;
}