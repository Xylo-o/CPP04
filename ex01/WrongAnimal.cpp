/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adprzyby <adprzyby@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 22:30:12 by adprzyby          #+#    #+#             */
/*   Updated: 2024/11/25 15:31:16 by adprzyby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include "Colors.hpp"

WrongAnimal::WrongAnimal() : type("WrongAnimal") {
    std::cout << GREEN << "WrongAnimal created." << RESET << std::endl;
}

WrongAnimal::~WrongAnimal() {
    std::cout << RED << "WrongAnimal destroyed." << RESET << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& other) : type(other.type) {
    std::cout << YELLOW << "WrongAnimal copied." << RESET << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other) {
    if (this != &other) {
        type = other.type;
    }
    std::cout << BLUE << "WrongAnimal assigned." << RESET << std::endl;
    return *this;
}

void WrongAnimal::makeSound() const {
    std::cout << MAGENTA << "WrongAnimal sound!" << RESET << std::endl;
}

std::string WrongAnimal::getType() const {
    return type;
}