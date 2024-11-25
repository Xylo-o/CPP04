/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adprzyby <adprzyby@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 22:29:56 by adprzyby          #+#    #+#             */
/*   Updated: 2024/11/25 21:11:27 by adprzyby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal {
	public:
    	Dog();
    	Dog(const Dog& other);
    	Dog& operator=(const Dog& other);
    	~Dog();
		
    	void makeSound() const;
		Brain* getBrain() const;
	private:
		Brain* brain;
};