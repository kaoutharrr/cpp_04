/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkouaz <kkouaz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 17:11:46 by kkouaz            #+#    #+#             */
/*   Updated: 2023/11/08 17:33:46 by kkouaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main() {
const Animal* meta = new Animal();
const Animal* j = new Dog();
const Animal* i = new Cat();
std::cout << j->getType() << " " << std::endl;
std::cout << i->getType() << " " << std::endl;
i->makeSound(); 
j->makeSound();//will output the cat sound! j->makeSound();
meta->makeSound();
std :: cout << "\n\n now with wrong animal \n\n\n";
const WrongAnimal* metaa = new WrongAnimal();
const WrongAnimal* a = new WrongCat();
std::cout << a->getType() << " " << std::endl;
i->makeSound(); 
//j->makeSound();//will output the cat sound! j->makeSound();
metaa->makeSound();
return 0; }