/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkouaz <kkouaz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 17:02:50 by kkouaz            #+#    #+#             */
/*   Updated: 2023/11/11 16:47:20 by kkouaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Dog.hpp"

Dog :: Dog(void)
{
    std :: cout << "Default constructor for the Dog class has been called :) \n";
    type = "Dog";
    dogBrain = new Brain();
}

Dog :: Dog(Dog& other)
{
    std :: cout << "Copy constructor for the Dog class has been called :) \n";
    *this = other;
}

Dog& Dog :: operator=(Dog& other)
{
     std :: cout << "Copy assignement operator for the Dog class has been called :) \n";
    if(this == &other)
        return(*this);
    type = other.type;
    if(dogBrain != NULL)
        delete dogBrain;
    
    dogBrain = new Brain();
    dogBrain = other.dogBrain;
    return(*this);
}

void Dog :: makeSound() const
{
    std :: cout << " 🐶 : woof woof !!\n";
}

Dog :: ~Dog(void)
{
    std :: cout << "Destructor for the Dog class has been called :) \n";
    delete dogBrain;
}
