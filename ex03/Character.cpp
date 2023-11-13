/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkouaz <kkouaz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 20:05:52 by kkouaz            #+#    #+#             */
/*   Updated: 2023/11/13 19:26:02 by kkouaz           ###   ########.fr       */
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
    //i = 0;
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
   // i = 0;
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
    *this = other;
}

Character& Character :: operator=(Character& other)
{
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

std::string const & Character ::  getName() const
{
    return(_name);
}

void   Character :: equip(AMateria* m)
{
   // int i = 0;
    if(count > 4)
        return;
   for (int i = 0; i < 4 ; i++)
   {
        if(_m[i] == NULL)
        {

                if(backup[i] != NULL)
                    delete backup[i];
                _m[i] = m->clone();
                 std :: cout << "typeeee = "<< _m[i]->getType() << "\n\n\n";
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
    std :: cout <<"Destructor for Character class has beeen called \n";
    // delete _m;
    // delete backup;
}