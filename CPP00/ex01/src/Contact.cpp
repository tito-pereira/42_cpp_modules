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

#include "../includes/Contact.hpp"

Contact::Contact() : p_info::first_name(nullptr), p_info::last_name(nullptr),
p_info::nickname(nullptr), p_info::number(nullptr), p_info::secret(nullptr) {}

Contact::~Contact() {}

void    Contact::change_info(PersonInfo new_info) {
    this->p_info.first_name = new_info.first_name;
    this->p_info.last_name = new_info.last_name;
    this->p_info.nickname = new_info.nickname;
    this->p_info.number = new_info.number;
    this->p_info.secret = new_info.secret;
}