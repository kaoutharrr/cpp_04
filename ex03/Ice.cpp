/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkouaz <kkouaz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 19:15:48 by kkouaz            #+#    #+#             */
/*   Updated: 2023/11/14 04:52:15 by kkouaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Ice.hpp"
#include"Character.hpp"

Ice :: Ice()
{
    std :: cout << "Default constructor of Ice has been called \n";
    MateriaType = "ice";
}

Ice :: Ice(Ice& other) : AMateria(other)
{
    std :: cout << "Copy constructor of Ice has been called \n";
    *this = other;
}

Ice& Ice :: operator=(Ice& other)
{
    if(this == &other)
        return(*this);
    MateriaType = other.MateriaType;
    return(*this);
}

AMateria* Ice:: clone() const
{
    return(new Ice());
}

void  Ice :: use(ICharacter& Character)
{
    std :: cout << "Ice: * shoots an ice bolt at  "  << Character.getName() <<  "*\n";
}

Ice  :: ~Ice()
{
     std :: cout << "Destructor of Ice has been called \n";
}