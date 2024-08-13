/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 20:13:04 by marvin            #+#    #+#             */
/*   Updated: 2024/08/13 20:13:04 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB {
	private:
		Weapon		gun;
		std::string	name;
	public:
		void	attack();
		HumanB(n_name);
		~HumanB();
}

/*
HumanB class:
. Weapon
. Name (constructor)
. attack()
. setWeapon()
<name> attacks with their <weapon type>
*/

#endif