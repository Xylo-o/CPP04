/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adprzyby <adprzyby@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 15:42:38 by adprzyby          #+#    #+#             */
/*   Updated: 2024/11/18 16:29:18 by adprzyby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(std::string type) : type(type) {
	std::cout << "Animal " << type << " has been created" << std::endl;
}

Animal::Animal(Animal& other) {
	
}

Animal::~Animal() {
	std::cout << "The animal has left the server" << std::endl;
}

void Animal::makeSound() {
	std::cout << "Animal sound" << std::endl;
}

std::string Animal::getType() {
	return type;
}