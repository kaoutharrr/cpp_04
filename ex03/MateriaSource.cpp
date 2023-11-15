/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkouaz <kkouaz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 14:24:47 by kkouaz            #+#    #+#             */
/*   Updated: 2023/11/15 03:41:58 by kkouaz           ###   ########.fr       */
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
        backup[i] = NULL;
    }
  
}

MateriaSource :: MateriaSource(MateriaSource& other)
{
    std ::  cout << "Copy constructor for MateriaSource has been called \n";
        for(int a = 0; a < 4; a++ )
      {
        _m[a] = other._m[a]->clone();
        backup[a] = _m[a];
    }
}


MateriaSource& MateriaSource :: operator=(MateriaSource &other)
{
    std ::  cout << "Copy assignemet operator for MateriaSource has been called \n";
    if(this == &other)
        return(*this);
    for (int a = 0; a< 4; a++)
    {
        if (_m[a])
            delete _m[a];
        if(backup[a])
            delete backup[a];
    }
    for(int a = 0; a < 4; a++ )
    {
        _m[a] = other._m[a]->clone();
        backup[a] = other.backup[a]->clone();
    }
    return(*this);
}

void  MateriaSource :: learnMateria(AMateria* m)
{
    for(int i = 0; i < 4 ; i++)
    {
        if(_m[i] == NULL)
        { 
            _m[i] = m->clone();
           break;
        }
    }
    delete m;
}

AMateria* MateriaSource :: createMateria(std::string const & type)
{
    
    for (int i = 0;i < 4; i++)
    {
        if(_m[i] != NULL && _m[i]->getType() == type)
        {
            if(backup[i])
            {
                delete backup[i];
                backup[i] = NULL;
            }
            backup[i] = _m[i]->clone();
            return(backup[i]);
        }
    } 
    return 0;
}

MateriaSource  :: ~MateriaSource()
{

   for(int i = 0 ; i < 4 ; i++)
    {
       if(backup[i])
       {
         delete backup[i];
         backup[i] = NULL;
        }
    }
    for(int i = 0 ; i < 4 ; i++)
    {
        if(_m[i])
        {
            delete _m[i];
            _m[i] = NULL;
        }    
    }
    std :: cout <<" Destructor of MateriaSource has been called \n";
}