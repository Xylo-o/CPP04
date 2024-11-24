/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adprzyby <adprzyby@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 22:28:26 by adprzyby          #+#    #+#             */
/*   Updated: 2024/11/24 21:49:57 by adprzyby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {
    std::cout << "Brain created." << std::endl;
    for (int i = 0; i < 100; ++i) {
        ideas[i] = "Empty idea";
    }
}

Brain::~Brain() {
    std::cout << "Brain destroyed." << std::endl;
}

Brain::Brain(const Brain& other) {
    std::cout << "Brain copied." << std::endl;
    for (int i = 0; i < 100; ++i) {
        ideas[i] = other.ideas[i];
    }
}

Brain& Brain::operator=(const Brain& other) {
    if (this != &other) {
        std::cout << "Brain assigned." << std::endl;
        for (int i = 0; i < 100; ++i) {
            ideas[i] = other.ideas[i];
        }
    }
    return *this;
}

std::string Brain::getIdea(int index) {
    if (index >= 0 && index < 100) {
        return ideas[index];
    }
    return "Invalid index";
}

void Brain::setIdea(int index, const std::string& idea) {
    if (index >= 0 && index < 100) {
        ideas[index] = idea;
    }
}