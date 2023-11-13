/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkouaz <kkouaz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 19:31:47 by kkouaz            #+#    #+#             */
/*   Updated: 2023/11/13 23:10:17 by kkouaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Cure.hpp"
#include "ICharacter.hpp"

Cure :: Cure() : AMateria()
{
    std :: cout << "Default constructor of Cure has been called \n";
    MateriaType = "cure";
}

Cure :: Cure(Cure& other) : AMateria(other)
{
    std :: cout << "Copy constructor of Cure has been called \n";
    *this = other;
}

Cure& Cure :: operator=(Cure& other)
{
    if(this == &other)
        return(*this);
    MateriaType = other.MateriaType;
    return(*this);
}

AMateria* Cure:: clone() const
{
    return(new Cure());
}

void  Cure:: use(ICharacter& Character)
{
  std :: cout << "Cure: * heals " << Character.getName()<< "'s wounds *\n";
}

Cure  :: ~Cure()
{
     std :: cout << "Destructor of Cure has been called \n";
}