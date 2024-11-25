/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adprzyby <adprzyby@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 22:29:42 by adprzyby          #+#    #+#             */
/*   Updated: 2024/11/25 14:07:06 by adprzyby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {
	public:
    	Cat();
    	Cat(const Cat& other);
    	Cat& operator=(const Cat& other);
    	~Cat();
		
    	void makeSound() const;
		Brain* getBrain() const;
	private:
		Brain* brain;
};