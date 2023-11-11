/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkouaz <kkouaz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 14:10:13 by kkouaz            #+#    #+#             */
/*   Updated: 2023/11/11 17:32:10 by kkouaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include<iostream>

class Animal
{
    protected :
        std :: string type;
    public:
        Animal();
        Animal(Animal& other);
        Animal& operator=(Animal& other);
        virtual void makeSound()const = 0;
        const std :: string  getType() const ;
        virtual ~Animal();
};


#endif