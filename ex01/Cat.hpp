/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adprzyby <adprzyby@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 22:29:42 by adprzyby          #+#    #+#             */
/*   Updated: 2024/11/24 21:59:07 by adprzyby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {
	public:
    	Cat();
    	~Cat();
    	Cat(const Cat& other);
    	Cat& operator=(const Cat& other);
		
    	void makeSound() const;
	private:
		Brain* brain;
};