/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adprzyby <adprzyby@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 22:29:42 by adprzyby          #+#    #+#             */
/*   Updated: 2024/11/23 22:29:43 by adprzyby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Animal.hpp"

class Cat : public Animal {
	public:
    	Cat();
    	virtual ~Cat();
    	Cat(const Cat& other);
    	Cat& operator=(const Cat& other);
		
    	virtual void makeSound() const;
};