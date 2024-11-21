/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adprzyby <adprzyby@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 15:42:38 by adprzyby          #+#    #+#             */
/*   Updated: 2024/11/21 12:34:56 by adprzyby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type("Animal") {
    std::cout << "Animal created." << std::endl;
}

Animal::~Animal() {
    std::cout << "Animal destroyed." << std::endl;
}

Animal::Animal(const Animal& other) : type(other.type) {
    std::cout << "Animal copied." << std::endl;
}

Animal& Animal::operator=(const Animal& other) {
    if (this != &other) {
        type = other.type;
    }
    std::cout << "Animal assigned." << std::endl;
    return *this;
}

void Animal::makeSound() const {
    std::cout << "Animal sound!" << std::endl;
}

std::string Animal::getType() const {
    return type;
}