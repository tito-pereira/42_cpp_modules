/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 17:26:37 by marvin            #+#    #+#             */
/*   Updated: 2024/07/27 17:26:37 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include <iostream>
#include "Contact.hpp"

class PhoneBook {
private:
    Contact contact_lst[8];
    PhoneBook();
    ~PhoneBook();
public:
    void    add_person(PersonInfo p_info);
    void    search_all();
    int     search_one(int index);
};

#endif
