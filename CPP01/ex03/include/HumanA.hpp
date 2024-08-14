/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 20:12:46 by marvin            #+#    #+#             */
/*   Updated: 2024/08/13 20:12:46 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

class HumanA {
	private:
		std::string	name;
		Weapon		gun;
	public:
		void	attack();
		HumanA(std::string n_name, Weapon n_gun);
		~HumanA();
};

/*
HumanA bob("Bob", club);
HumanA class:
. Weapon (constructor)
. Name (constructor)
. attack()
<name> attacks with their <weapon type>
*/

#endif