/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkouaz <kkouaz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 20:05:52 by kkouaz            #+#    #+#             */
/*   Updated: 2023/11/15 03:40:11 by kkouaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Character.hpp"
#include"ICharacter.hpp"
#include"Ice.hpp"
#include"Cure.hpp"

Character :: Character()
{
    std :: cout << "Default constructor of Character has been called \n";
    _name = "default";
    for(int i = 0 ; i < 4 ; i++)
    {
        _m[i] = NULL;
        backup[i] = NULL;
    }
   count = 0;
}

Character :: Character(std :: string name)
{
    std :: cout << "Parametrized constructor of Character has been called \n";
    _name = name;
    for(int i = 0 ; i < 4 ; i++)
    {
        _m[i] = NULL;
        backup[i] = NULL;
    }
    count = 0;
}

Character :: Character(Character& other)
{
    std :: cout << "Copy constructor of Character has been called \n";
      for(int a = 0; a < 4; a++ )
      {
        _m[a] = other._m[a]->clone();
        backup[a] = _m[a];
    }
}

Character& Character :: operator=(Character& other)
{
    if(this == &other)
        return(*this);
    for (int a = 0; a< 4; a++)
    {
        if(_m[a])
            delete _m[a];
    }
    for(int a = 0; a < 4; a++ )
    {
        _m[a] = other._m[a]->clone();
        backup[a] = _m[a];
    }
    return(*this);
}

std::string const & Character ::  getName() const
{
    return(_name);
}

void   Character :: equip(AMateria* m)
{
    if(!m)
        return;
   for (int i = 0; i < 4 ; i++)
   {
        if(_m[i] == NULL)
        {
            if(backup[i] != NULL)
            {
                delete backup[i];
                backup[i] = NULL;
            }
            _m[i] = m;
            _m[i] = m->clone();
            backup[i] = _m[i];
            count++;
            return;
        }
    }
}

void   Character :: unequip(int idx)
{
    if(idx >= count  || idx < 0)
        return;
    if(_m[idx] !=  NULL)
    {
        _m[idx] = NULL;
        count--;
    }
}

void  Character :: use(int idx, ICharacter& target)
{
    
    if(idx >= 0 && idx < 4 && _m[idx]!= NULL)
    {
         _m[idx]->use(target);
    }
}

Character :: ~Character()
{
    for(int i = 0; i < 4 ; i++)
    {
        if(backup[i])
        {
            if (backup[i] != _m[i]) 
            {
                delete backup[i];
                backup[i] = NULL;
            }
        }
        if(_m[i])
        {
            delete _m[i];
            _m[i] = NULL;
        }
    }
    std :: cout <<"Destructor for Character class has beeen called \n";
}