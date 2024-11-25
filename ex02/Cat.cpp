/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adprzyby <adprzyby@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 22:29:35 by adprzyby          #+#    #+#             */
/*   Updated: 2024/11/25 21:10:36 by adprzyby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Brain.hpp"
#include "Colors.hpp"

Cat::Cat() : brain(new Brain()) {
    type = "Cat";
    std::cout << GREEN << "Cat created." << RESET << std::endl;
}

Cat::Cat(const Cat& other) {
	brain = new Brain(*other.brain);
	std::cout << YELLOW << "Cat copied." << RESET << std::endl;
}

Cat& Cat::operator=(const Cat& other) {
    if (this != &other) {
        AAnimal::operator=(other);
		delete brain;
		brain = new Brain(*other.brain);
    }
    std::cout << BLUE << "Cat assigned." << RESET << std::endl;
    return *this;
}

Cat::~Cat() {
	delete brain;
    std::cout << RED << "Cat destroyed." << RESET << std::endl;
}

void Cat::makeSound() const {
	std::cout << MAGENTA << "The cat goes Meowww" << RESET << std::endl;
}

Brain* Cat::getBrain() const {
	return brain;
}