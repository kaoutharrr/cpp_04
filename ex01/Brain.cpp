/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkouaz <kkouaz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 16:46:59 by kkouaz            #+#    #+#             */
/*   Updated: 2023/11/15 02:21:04 by kkouaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <string>

Brain :: Brain()
{
   std :: cout <<  "Default constructor of Brain is called \n";
   for (int i = 0; i < 100; i++)
    {
        ideas[i] = "idea..";
    }
}

Brain :: Brain(Brain& other)
{
    std :: cout << "Copy constructor of Brain class is called \n";
    *this = other;
}

Brain& Brain :: operator=(Brain& other)
{
    std :: cout << "Copy assignement operator of Brain class has been called :) \n";
    if(this == &other)
        return(*this);

    for (int i = 0; i < 100; i++)
    {
        ideas[i]= other.ideas[i];
    }
    return(*this);
}

Brain :: ~Brain()
{
    std :: cout <<  "Default destructor of Brain is called \n";
}