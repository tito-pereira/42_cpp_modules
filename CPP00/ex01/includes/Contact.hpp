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

namespace	PersonInfo {
	char	*first_name;
    char	*last_name;
	char	*nickname;
	char	*number;
	char	*secret;
}

class Contact {
private:
    static PersonInfo	p_info;
	Contact();
	~Contact();
public:
    static void	change_info(PersonInfo new_info);
};

#endif