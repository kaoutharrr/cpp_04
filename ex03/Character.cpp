/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkouaz <kkouaz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 20:05:52 by kkouaz            #+#    #+#             */
/*   Updated: 2023/11/11 20:43:28 by kkouaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Character.hpp"
#include"Ice.hpp"
#include"Cure.hpp"
Character :: Character()
{
    std :: cout << "Default constructor of Character has been called \n";
    _name = "default";
    if(_m->getType() == "ice")
        _m = new Ice();
    else if (_m->getType() == "cure")
        _m = new Cure();
    i = 0;
}

Character :: Character(std :: string name)
{
    std :: cout << "Parametrized constructor of Character has been called \n";
    _name = name;
    if(_m->getType() == "ice")
        _m = new Ice();
    else if (_m->getType() == "cure")
        _m = new Cure();
    i = 0;
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
    delete _m;
    if(_m->getType() == "ice")
        _m = new Ice();
    else if (_m->getType() == "cure")
        _m = new Cure();
    _m = other._m;
}

std::string const & Character ::  getName() const
{
    return(_name);
}

void  :: Character :: equip(AMateria* m)
{
    if(i >= MAX)
        return;
    _m = m;
    i++;
}


