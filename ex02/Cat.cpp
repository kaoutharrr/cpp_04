/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkouaz <kkouaz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 17:05:43 by kkouaz            #+#    #+#             */
/*   Updated: 2023/11/11 16:06:12 by kkouaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Cat.hpp"

Cat :: Cat(void)
{
    std :: cout << "Default constructor for the Cat class has been called :) \n";
    type = "Cat";
    catBrain = new Brain();
}

Cat :: Cat(Cat& other) : Animal(other)
{
    std :: cout << "Copy constructor for the Cat class has been called :) \n";
    *this = other;
    
}

Cat& Cat :: operator=(Cat& other) 
{
     std :: cout << "Copy assignement operator for the Cat class has been called :) \n";
    if(this == &other)
        return(*this);
    type = other.type;
    if(catBrain != NULL)
        delete catBrain;
    catBrain = new Brain();
    catBrain = other.catBrain;
    return(*this);
}

void Cat :: makeSound() const
{
    std :: cout << " 😸 : meow meow !!\n";
}

Cat :: ~Cat(void)
{
    std :: cout << "Destructor for the Cat class has been called :) \n";
    delete catBrain;
}



// std :: string  Animal:: getType()
// {
//     return(type);
// }