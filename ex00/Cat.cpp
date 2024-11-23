/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adprzyby <adprzyby@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 15:53:48 by adprzyby          #+#    #+#             */
/*   Updated: 2024/11/23 20:27:23 by adprzyby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() {
    type = "Cat";
    std::cout << "Cat created." << std::endl;
}

Cat::Cat(const Cat& other) {
	std::cout << "Cat copied." << std::endl;
}

Cat& Cat::operator=(const Cat& other) {
    if (this != &other) {
        type = other.type;
    }
    std::cout << "Cat assigned." << std::endl;
    return *this;
}

Cat::~Cat() {
    std::cout << "Cat destroyed." << std::endl;
}

void Cat::makeSound() const {
	std::cout << "The cat goes Meowww" << std::endl;
}