/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 20:12:14 by marvin            #+#    #+#             */
/*   Updated: 2024/08/13 20:12:14 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>
#include <string>

class Weapon {
	private:
		std::string	type;
	public:
		&std::string	getType() const;
		void			setType(std::string new_type);
		Weapon();
		~Weapon();
};

/*
Weapon class:
. A private attribute type, which is a string.
. A getType() member function that returns a const reference to type.
. A setType() member function that sets type using the new one passed as parameter.
*/

#endif