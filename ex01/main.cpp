/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkouaz <kkouaz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 17:11:46 by kkouaz            #+#    #+#             */
/*   Updated: 2023/11/15 02:52:09 by kkouaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"



int main()
{
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
        delete arr[i];
    }
   return(0);
}

// int main() {

// const Animal* j = new Dog(); 
// //const Animal* i = new Cat();
// delete j;//should not create a leak delete i;

// return 0; 
// }
