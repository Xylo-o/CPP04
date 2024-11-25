/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adprzyby <adprzyby@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 22:30:03 by adprzyby          #+#    #+#             */
/*   Updated: 2024/11/25 21:14:27 by adprzyby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main() {
    const AAnimal* dog = new Dog();
    const AAnimal* cat = new Cat();
    dog->makeSound();
    cat->makeSound();
    delete dog;
    delete cat;

    const AAnimal* animals[10];
    for (int i = 0; i < 10; ++i) {
        if (i < 5)
            animals[i] = new Dog();
        else
            animals[i] = new Cat();
    }
    for (int i = 0; i < 10; ++i) {
        animals[i]->makeSound();
        delete animals[i];
    }

    return 0;
}