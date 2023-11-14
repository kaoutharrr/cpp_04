/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkouaz <kkouaz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 17:05:43 by kkouaz            #+#    #+#             */
/*   Updated: 2023/11/14 07:14:18 by kkouaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Cat.hpp"

Cat :: Cat(void)
{
    std :: cout << "Default constructor for the Cat class has been called :) \n";
    type = "Cat";
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
    return(*this);
}

Cat :: ~Cat(void)
{
    std :: cout << "Destructor for the Cat class has been called :) \n";
}

void Cat :: makeSound() const
{
    std :: cout << "cat  😸 : meow meow !!\n";
}
