/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adprzyby <adprzyby@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 22:29:56 by adprzyby          #+#    #+#             */
/*   Updated: 2024/11/24 21:51:17 by adprzyby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal {
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