/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkouaz <kkouaz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 17:21:13 by kkouaz            #+#    #+#             */
/*   Updated: 2023/11/08 17:23:27 by kkouaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include<iostream>

class WrongAnimal
{
    protected :
        std :: string type;
    public:
        WrongAnimal();
        WrongAnimal(WrongAnimal& other);
        WrongAnimal& operator=(WrongAnimal& other);
        void makeSound()const;
        const std :: string  getType() const ;
        ~WrongAnimal();
};


#endif