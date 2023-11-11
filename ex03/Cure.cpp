/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkouaz <kkouaz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 19:31:47 by kkouaz            #+#    #+#             */
/*   Updated: 2023/11/11 19:34:50 by kkouaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Cure.hpp"

Cure :: Cure()
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

AMateria* AMateria:: clone() const
{
    return(new Cure());
}

void  AMateria :: use(ICharacter& Character)
{
  std :: cout << "Cure: "* heals "" <<Character.name<< "’s wounds *\n";
}

Cure  :: ~Cure()
{
     std :: cout << "Destructor of Cure has been called \n";
}