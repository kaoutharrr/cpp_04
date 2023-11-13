/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkouaz <kkouaz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 14:24:47 by kkouaz            #+#    #+#             */
/*   Updated: 2023/11/13 23:11:12 by kkouaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"MateriaSource.hpp"
#include"AMateria.hpp"
#include"Ice.hpp"
#include"Cure.hpp"

MateriaSource :: MateriaSource()
{
    std ::  cout << "Default constructor for MateriaSource has been called \n";
    for(int i = 0 ; i < 4 ; i++)
    {
        _m[i] = NULL;
    }
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
    for (int a = 0; a< 4; a++)
    {
        delete _m[a];
    }
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

void  MateriaSource :: learnMateria(AMateria* m)
{
    for(int i = 0; i < 4 ; i++)
    {
        if(_m[i] == NULL)
        { 
            std :: cout << "i = " << i << "\n";
            _m[i] = m->clone();
           return;
        }
    }
}

AMateria* MateriaSource :: createMateria(std::string const & type)
{
       
    for (int i = 0;i < 4; i++)
    {
        if(_m[i] != NULL && _m[i]->getType() == type)
        {
            return(_m[i]->clone());
        }
    } 
    return 0;
}

MateriaSource  :: ~MateriaSource()
{

    for(int i = 0 ; i < 4 ; i++)
    {
        if(_m[i])
            delete _m[i];
    }
    std :: cout <<" Destructor of MateriaSource has been called \n";
}