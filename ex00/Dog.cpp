/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adprzyby <adprzyby@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 15:53:55 by adprzyby          #+#    #+#             */
/*   Updated: 2024/11/23 20:36:24 by adprzyby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() {
    type = "Dog";
    std::cout << "Dog created." << std::endl;
}

Dog::Dog(const Dog& other) {
	std::cout << "Dog coppied" << std::endl;
}

Dog& Dog::operator=(const Dog& other) {
	if (this != &other) {
		type = other.type;
	}
	std::cout << "Dog assigned." << std::endl;
	return *this;
}

Dog::~Dog() {
    std::cout << "Dog destroyed." << std::endl;
}

void Dog::makeSound() const {
	std::cout << "The dog goes Barrrk" << std::endl;
}