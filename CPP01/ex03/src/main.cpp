/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 20:09:21 by marvin            #+#    #+#             */
/*   Updated: 2024/08/13 20:09:21 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/HumanA.hpp"
#include "../include/HumanB.hpp"

int main()
{
	{
		Weapon club = Weapon("crude spiked club");
		HumanA bob("Bob", club);
		bob.attack();
		club.setType("some other type of club");
		bob.attack();
	}
	{
		Weapon club = Weapon("crude spiked club");
		HumanB jim("Jim");
		jim.setWeapon(club);
		jim.attack();
		club.setType("some other type of club");
		jim.attack();
	}
	return 0;
}

/*

					| Reference vs Pointer |

- A reference is not a data type in itself and instead an alias to
an already existing / declared variable.
Therefore, it cannot be NULL initialized and must be directly assigned
an existing value / address as soon as it is declared or initialized.
For that reason, the "Weapon" class inside the "HumanA" class is a
reference because i can directly initialize it with the "HumanA"
constructor initialization list.

- The traditional pointer is a data type in itself and, because of that,
does not need an instant value and can be NULL initialized.
For that reason, the "Weapon" class inside the "HumanB" class is a
NULL initialized pointer which can either be later changed with the
"setWeapon()" function, or not be changed at all

tl;dr:
"Weapon" inside "HumanA" is a REFERENCE.
"Weapon" inside "HumanA" is a POINTER.

*/