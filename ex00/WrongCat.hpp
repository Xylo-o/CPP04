/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adprzyby <adprzyby@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 12:31:40 by adprzyby          #+#    #+#             */
/*   Updated: 2024/11/23 20:37:32 by adprzyby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {
	public:
    	WrongCat();
    	virtual ~WrongCat();
    	WrongCat(const WrongCat& other);
    	WrongCat& operator=(const WrongCat& other);

    	virtual void makeSound() const;
};