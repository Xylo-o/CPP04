/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adprzyby <adprzyby@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 22:29:17 by adprzyby          #+#    #+#             */
/*   Updated: 2024/11/25 15:36:57 by adprzyby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Colors.hpp"

Animal::Animal() : type("Animal") {
    std::cout << GREEN << "Animal created." << RESET << std::endl;
}

Animal::~Animal() {
    std::cout << RED << "Animal destroyed." << RESET << std::endl;
}

Animal::Animal(const Animal& other) : type(other.type) {
    std::cout << YELLOW << "Animal copied." << RESET << std::endl;
}

Animal& Animal::operator=(const Animal& other) {
    if (this != &other) {
        type = other.type;
    }
    std::cout << BLUE << "Animal assigned." << RESET << std::endl;
    return *this;
}

void Animal::makeSound() const {
    std::cout << MAGENTA << "Animal sound!" << RESET << std::endl;
}

std::string Animal::getType() const {
    return type;
}