/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkouaz <kkouaz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 14:21:19 by kkouaz            #+#    #+#             */
/*   Updated: 2023/11/14 08:25:58 by kkouaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal :: Animal(void)
{
    std :: cout << "Default constructor for the Animal class has been called :) \n";
}

Animal :: Animal(Animal& other)
{
    std :: cout << "Copy constructor for the Animal class has been called :) \n";
    *this = other;
}

Animal& Animal :: operator=(Animal& other)
{
     std :: cout << "Copy assignement operator for the Animal class has been called :) \n";
    if(this == &other)
        return(*this);
    type = other.type;
    return(*this);
}

Animal :: ~Animal(void)
{
    std :: cout << "Destructor for the Animal class has been called :) \n";
}


const std :: string  Animal:: getType() const
{
    return(type);
}