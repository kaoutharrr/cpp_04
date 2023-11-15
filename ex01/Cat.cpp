/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkouaz <kkouaz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 17:05:43 by kkouaz            #+#    #+#             */
/*   Updated: 2023/11/15 02:30:40 by kkouaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Cat.hpp"

Cat :: Cat(void)
{
    std :: cout << "Default constructor for the Cat class has been called :) \n";
    type = "Cat";
    catBrain = new Brain();
}

Cat :: Cat(Cat& other) 
{
    std :: cout << "Copy constructor for the Cat class has been called :) \n";
    type = other.type;
    catBrain = new Brain(*other.catBrain);
}

Cat& Cat :: operator=(Cat& other) 
{
    std :: cout << "Copy assignement operator for the Cat class has been called :) \n";
    if(this == &other)
        return(*this);
    type = other.type;
    if(catBrain != NULL)
        delete catBrain;
    catBrain = new Brain(*other.catBrain);
    return(*this);
}

void Cat :: makeSound() const
{
    std :: cout << "cat  😸 : meow meow !!\n";
}

Cat :: ~Cat(void)
{
    std :: cout << "Destructor for the Cat class has been called :) \n";
    delete catBrain;
}