/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adprzyby <adprzyby@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 22:29:48 by adprzyby          #+#    #+#             */
/*   Updated: 2024/11/25 21:11:16 by adprzyby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Brain.hpp"
#include "Colors.hpp"

Dog::Dog() : brain(new Brain()) {
    type = "Dog";
    std::cout << GREEN << "Dog created." << RESET << std::endl;
}

Dog::Dog(const Dog& other) : AAnimal(other) {
	brain = new Brain(*other.brain);
	std::cout << YELLOW << "Dog coppied" << RESET << std::endl;
}

Dog& Dog::operator=(const Dog& other) {
	if (this != &other) {
		AAnimal::operator=(other);
		delete brain;
		brain = new Brain(*other.brain);
	}
	std::cout << BLUE << "Dog assigned." << RESET << std::endl;
	return *this;
}

Dog::~Dog() {
	delete brain;
    std::cout << RED << "Dog destroyed." << RESET << std::endl;
}

void Dog::makeSound() const {
	std::cout << MAGENTA << "The dog goes Barrrk" << RESET << std::endl;
}

Brain* Dog::getBrain() const {
	return brain;
}