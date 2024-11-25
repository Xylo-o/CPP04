/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adprzyby <adprzyby@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 22:30:28 by adprzyby          #+#    #+#             */
/*   Updated: 2024/11/25 15:30:07 by adprzyby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"
#include "Colors.hpp"

WrongCat::WrongCat() {
    type = "WrongCat";
    std::cout << GREEN << "WrongCat created." << RESET << std::endl;
}

WrongCat::WrongCat(const WrongCat& other) {
	std::cout << YELLOW << "WrongCat copied." << RESET << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& other) {
	if (this != &other) {
		type = other.type;
	}
	std::cout << BLUE << "WrongCat assigned." << RESET << std::endl;
	return *this;
}

WrongCat::~WrongCat() {
    std::cout << RED << "WrongCat destroyed." << RESET << std::endl;
}

void WrongCat::makeSound() const {
    std::cout << MAGENTA << "Wrong meow!" << RESET << std::endl;
}