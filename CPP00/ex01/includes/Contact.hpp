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

class Contact {
private:
    char	*first_name;
    char	*last_name;
	char	*nickname;
	char	*number;
	char	*secret;
	Contact();
	~Contact();
public:
    change_info(char *s1, char *s2, char *s3, char *s4, char *s5);
};

#endif