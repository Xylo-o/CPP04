/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adprzyby <adprzyby@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 22:30:03 by adprzyby          #+#    #+#             */
/*   Updated: 2024/11/25 15:32:06 by adprzyby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Colors.hpp"

int main() {
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    delete j;
    delete i;
    const Animal* animals[10];

    for (int index = 0; index < 10; ++index) {
        if (index < 5) {
            animals[index] = new Dog();
        } else {
            animals[index] = new Cat();
        }
    }
    for (int index = 0; index < 10; ++index) {
        delete animals[index];
    }

    Dog originalDog;
    originalDog.getBrain()->setIdea(0, "Original idea");

    Dog copiedDog = originalDog;
    copiedDog.getBrain()->setIdea(0, "Copied idea");

    std::cout << CYAN << "Original Dog Brain Idea 0: " << originalDog.getBrain()->getIdea(0) << RESET << std::endl;
    std::cout << CYAN << "Copied Dog Brain Idea 0: " << copiedDog.getBrain()->getIdea(0) << RESET << std::endl;

    return 0;
}