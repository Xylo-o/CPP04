/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adprzyby <adprzyby@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 22:29:48 by adprzyby          #+#    #+#             */
/*   Updated: 2024/11/24 21:56:46 by adprzyby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : brain(new Brain()) {
    type = "Dog";
    std::cout << "Dog created." << std::endl;
}

Dog::Dog(const Dog& other) : Animal(other) {
	brain = new Brain(*other.brain);
	std::cout << "Dog coppied" << std::endl;
}

Dog& Dog::operator=(const Dog& other) {
	if (this != &other) {
		Animal::operator=(other);
		delete brain;
		brain = new Brain(*other.brain);
		type = other.type;
	}
	std::cout << "Dog assigned." << std::endl;
	return *this;
}

Dog::~Dog() {
	delete brain;
    std::cout << "Dog destroyed." << std::endl;
}

void Dog::makeSound() const {
	std::cout << "The dog goes Barrrk" << std::endl;
}

Brain* Dog::getBrain() const {
	return brain;
}