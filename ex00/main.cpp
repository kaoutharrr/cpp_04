/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkouaz <kkouaz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 17:11:46 by kkouaz            #+#    #+#             */
/*   Updated: 2023/11/15 01:27:39 by kkouaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main() 
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound(); 
    j->makeSound();
    meta->makeSound();
    
    delete meta;
    delete i;
    delete j;


    std :: cout << "\n\n now with wrong animal \n\n\n";
    const WrongAnimal* metaa = new WrongAnimal();
    const WrongAnimal* a = new WrongCat();

    std::cout << a->getType() << " " << std::endl;
    a->makeSound(); 
    metaa->makeSound();

    delete metaa;
    delete a;

    return 0; 
}
