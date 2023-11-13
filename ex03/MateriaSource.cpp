/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkouaz <kkouaz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 14:24:47 by kkouaz            #+#    #+#             */
/*   Updated: 2023/11/13 01:36:08 by kkouaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"MateriaSource.hpp"
#include"AMateria.hpp"
#include"Ice.hpp"
#include"Cure.hpp"

MateriaSource :: MateriaSource()
{
    std ::  cout << "Default constructor for MateriaSource has been called \n";
}

MateriaSource :: MateriaSource(MateriaSource& other)
{
    std ::  cout << "Copy constructor for MateriaSource has been called \n";
    *this = other;
}

MateriaSource& MateriaSource :: operator=(MateriaSource &other)
{
    std ::  cout << "Copy assignemet operator for MateriaSource has been called \n";
    if(this == &other)
        return(*this);
    if(_m)
        delete[] _m;
    if(_m)
        delete _m;
    for (int a = 0; a< 4; a++)
    {
        if(_m[a]->getType() == "ice")
            _m[a] = new Ice();
        else if (_m[a]->getType() == "cure")
            _m[a] = new Cure();
    }
    for(int a = 0; a < 4; a++ )
    {
        _m[a] = other._m[a];
    }
    return(*this);
}
