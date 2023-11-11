/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkouaz <kkouaz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 20:05:52 by kkouaz            #+#    #+#             */
/*   Updated: 2023/11/11 21:46:35 by kkouaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Character.hpp"
#include"Ice.hpp"
#include"Cure.hpp"
Character :: Character()
{
    std :: cout << "Default constructor of Character has been called \n";
    _name = "default";
    i = 0;
   // count = 0;
}

Character :: Character(std :: string name)
{
    std :: cout << "Parametrized constructor of Character has been called \n";
    _name = name;
    i = 0;
   // count = 0;
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

std::string const & Character ::  getName() const
{
    return(_name);
}

void   Character :: equip(AMateria* m)
{
    if(i >= 4 || i < 0)
        return;
    if(_m[i]->getType() == "ice")
        _m[i] = new Ice();
    else if (_m[i]->getType() == "cure")
        _m[i] = new Cure();
    i++;
}

void   Character :: unequip(int idx)
{
    if(idx >= i || idx < i)
        return;
    
}