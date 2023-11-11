/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkouaz <kkouaz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 18:18:29 by kkouaz            #+#    #+#             */
/*   Updated: 2023/11/11 18:36:57 by kkouaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"AMateria.hpp"

AMateria :: AMateria(void)
{
    std :: cout << "Default constructor of AMateria class has been called \n";
}

AMateria :: AMateria(std::string const & type)
{
    std :: cout << "Parametrized constructor of AMateria class has been called \n";
    MateriaType = type;
}

AMateria :: AMateria(AMateria& other)
{
    std :: cout << "Copy constructor of AMateria class has been called \n";
    *this = other;
}

AMateria& AMateria :: operator=(AMateria& other)
{
    std :: cout << "Copy assignment operator of AMateria class has been called \n";
    
    if(this == &other)
        return(*this);
    MateriaType = other.MateriaType;
}

std::string const& AMateria:: getType() const
{
    return(MateriaType);
}

AMateria :: ~AMateria(void)
{
    std :: cout << "Destructor of AMateria class has been called \n";
}