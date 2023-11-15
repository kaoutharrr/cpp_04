/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkouaz <kkouaz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 17:11:46 by kkouaz            #+#    #+#             */
/*   Updated: 2023/11/15 02:53:47 by kkouaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

// int main() {
// //const Animal* meta = new Animal();
// const Animal* j = new Dog();
// const Animal* i = new Cat();
// std::cout << j->getType() << " " << std::endl;
// std::cout << i->getType() << " " << std::endl;
// i->makeSound(); 
// j->makeSound();//will output the cat sound! j->makeSound();
// //meta->makeSound();
// std :: cout << "\n\n now with wrong animal \n\n\n";
// const WrongAnimal* metaa = new WrongAnimal();
// const WrongAnimal* a = new WrongCat();
// std::cout << a->getType() << " " << std::endl;
// a->makeSound(); 
// //j->makeSound();//will output the cat sound! j->makeSound();
// metaa->makeSound();

// return 0; 
// }

int main()
{
    // Animal a;
    Animal* arr[10];

    for (int i = 0; i < 5; i++)
    {
        arr[i] = new Cat();
    }
    for (int i = 5; i < 10; i++)
    {
        arr[i] = new Dog();
    }
    for (int i = 0; i < 10; i++)
    {
        arr[i]->makeSound();
    }
    for (int i = 0; i < 10; i++)
    {
        delete arr[i];
    }
    return 0;
}
