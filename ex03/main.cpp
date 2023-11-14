/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkouaz <kkouaz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 17:21:29 by kkouaz            #+#    #+#             */
/*   Updated: 2023/11/14 12:14:57 by kkouaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"AMateria.hpp"
#include"Character.hpp"
#include"MateriaSource.hpp"
#include"Ice.hpp"
#include"Cure.hpp"
#include <stdio.h>

int main1() 
{
   IMateriaSource* src = new MateriaSource();
   src->learnMateria(new Ice());
   src->learnMateria(new Cure());

     ICharacter* me = new Character("me");
     AMateria* tmp;
     tmp = src->createMateria("ice");
     me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);
    me->equip(tmp);
    me->equip(tmp);
    me->equip(tmp);
    me->unequip(0);
    tmp = src->createMateria("cure");
    // me->equip(tmp);
    
    ICharacter* bob = new Character("bob");
    me->use(0, *bob);
    me->use(1, *bob);
    
  delete bob; 
  delete me;
  delete src;
  return 0;
 }

 int main()
 {
    main1();
   system("leaks Materias");
 }

// int main() 
// {
// IMateriaSource* src = new MateriaSource();
//  src->learnMateria(new Ice());
//   src->learnMateria(new Cure());
// ICharacter* me = new Character("me");
//     AMateria* tmp;
//     tmp = src->createMateria("ice");
//     me->equip(tmp);
//     me->unequip(0);
//     me->equip(tmp);
//     tmp = src->createMateria("cure");
//     me->equip(tmp);
//     me->unequip(1);
//     me->equip(tmp);

// ICharacter* bob = new Character("bob");
//  me->use(0, *bob);
//    me->use(1, *bob);
// delete bob; 
// delete me;
// delete src;
// system("leaks Materias");

// return 0;
// }