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

class HumanB {
	private:
		Weapon		gun;
		std::string	name;
	public:
		void	attack();
		HumanB(n_gun, n_name);
		~HumanB();
}

/*
HumanA class:
. Weapon (constructor)
. Name (constructor)
. attack()
<name> attacks with their <weapon type>
*/

#endif