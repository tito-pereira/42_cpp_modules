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
	char	*first_name;
    char	*last_name;
	char	*nickname;
	char	*number;
	char	*secret;
}	PersonInfo;

class Contact {
//private:
    //PersonInfo	p_info;
public:
	PersonInfo	p_info;
	Contact();
	~Contact();
    void	change_info(PersonInfo new_info);
	//void	check_info();
	//bool	check_exist();
};

#endif

/*
check_exist apenas verifica se o primeiro membro tá definido e retorna true;
check_info é para eu poder aceder à info para printar
ou simplesmente torno a variável pública.
eu vou querer printar um de cada vez...
*/