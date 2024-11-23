/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adprzyby <adprzyby@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 15:53:58 by adprzyby          #+#    #+#             */
/*   Updated: 2024/11/23 20:28:12 by adprzyby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Animal.hpp"

class Dog : public Animal {
	public:
    	Dog();
    	virtual ~Dog();
    	Dog(const Dog& other);
    	Dog& operator=(const Dog& other);
		
    	virtual void makeSound() const;
};