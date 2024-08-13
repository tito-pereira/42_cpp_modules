/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 14:38:51 by marvin            #+#    #+#             */
/*   Updated: 2024/08/13 14:38:51 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/this_is_brain.hpp"

int main() {
    std::string string = "HI THIS IS BRAIN";
    std::string *stringPTR = &string;
    std::string &stringREF = string;
    std::cout << "og_string memory address: " << &string << std::endl;
    std::cout << "stringPTR memory address: " << &stringPTR << std::endl;
    std::cout << "stringREF memory address: " << &stringREF << std::endl;
    std::cout << "og_string value: " << string << std::endl;
    std::cout << "stringPTR value: " << *stringPTR << std::endl;
    std::cout << "stringREF value: " << stringREF << std::endl;
}
