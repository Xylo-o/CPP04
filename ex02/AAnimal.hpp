/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adprzyby <adprzyby@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 17:34:24 by adprzyby          #+#    #+#             */
/*   Updated: 2024/11/25 21:25:10 by adprzyby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string>

class AAnimal {
protected:
    std::string type;
public:
    AAnimal();
    virtual ~AAnimal();
    AAnimal(const AAnimal& other);
    AAnimal& operator=(const AAnimal& other);

    virtual void makeSound() const = 0;
    std::string getType() const;
};