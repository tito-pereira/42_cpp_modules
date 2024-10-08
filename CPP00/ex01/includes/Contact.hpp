/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 17:27:08 by marvin            #+#    #+#             */
/*   Updated: 2024/07/27 17:27:08 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
#define CONTACT_H

#include <iostream>

typedef	struct	PeopleInfo {
	std::string	first_name;
    std::string	last_name;
	std::string	nickname;
	std::string	number;
	std::string	secret;
}	PersonInfo;

class Contact {
public:
	PersonInfo	p_info;
	Contact();
	~Contact();
    void	change_info(PersonInfo new_info);
};

#endif