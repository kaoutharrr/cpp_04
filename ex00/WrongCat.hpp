/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkouaz <kkouaz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 17:28:01 by kkouaz            #+#    #+#             */
/*   Updated: 2023/11/08 17:29:22 by kkouaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "Animal.hpp"

class WrongCat : public WrongAnimal
{
    public :
        WrongCat();
        WrongCat(WrongCat& other);
        WrongCat& operator=(WrongCat& other);
        void makeSound()const;
        ~WrongCat();
};


#endif

