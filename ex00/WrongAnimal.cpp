/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkouaz <kkouaz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 17:25:27 by kkouaz            #+#    #+#             */
/*   Updated: 2023/11/08 17:25:31 by kkouaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include"WrongAnimal.hpp"


WrongAnimal :: WrongAnimal(void)
{
    std :: cout << "Default constructor for the WrongAnimal class has been called :) \n";
}

WrongAnimal :: WrongAnimal(WrongAnimal& other)
{
    std :: cout << "Copy constructor for the WrongAnimal class has been called :) \n";
    *this = other;
}

WrongAnimal& WrongAnimal :: operator=(WrongAnimal& other)
{
     std :: cout << "Copy assignement operator for the WrongAnimal class has been called :) \n";
    if(this == &other)
        return(*this);
    type = other.type;
    return(*this);
}

WrongAnimal :: ~WrongAnimal(void)
{
    std :: cout << "Destructor for the WrongAnimal class has been called :) \n";
}

void WrongAnimal :: makeSound() const
{
    std :: cout << "WrongAnimal is general , and can not have a sound !!\n";
}

const std :: string  WrongAnimal:: getType() const
{
    return(type);
}