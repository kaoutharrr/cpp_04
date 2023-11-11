/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkouaz <kkouaz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 17:30:46 by kkouaz            #+#    #+#             */
/*   Updated: 2023/11/08 17:30:51 by kkouaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include"WrongCat.hpp"

WrongCat :: WrongCat(void)
{
    std :: cout << "Default constructor for the WrongCat class has been called :) \n";
    type = "WrongCat";
}

WrongCat :: WrongCat(WrongCat& other)
{
    std :: cout << "Copy constructor for the WrongCat class has been called :) \n";
    *this = other;
}

WrongCat& WrongCat :: operator=(WrongCat& other)
{
     std :: cout << "Copy assignement operator for the WrongCat class has been called :) \n";
    if(this == &other)
        return(*this);
    type = other.type;
    return(*this);
}

WrongCat :: ~WrongCat(void)
{
    std :: cout << "Destructor for the WrongCat class has been called :) \n";
}

void WrongCat :: makeSound() const
{
    std :: cout << " 😸 : meow meow !!\n";
}