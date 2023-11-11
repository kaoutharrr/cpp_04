/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkouaz <kkouaz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 19:56:25 by kkouaz            #+#    #+#             */
/*   Updated: 2023/11/11 21:45:44 by kkouaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include"ICharacter.hpp"

class Character : public ICharacter
{
    private:
        std :: string _name;
        AMateria* _m[4];
        int i;
      //  int count;
    public:
        Character();
        Character(std :: string name);
        Character(Character &other);
        Character& operator=(Character &other);
        std::string const & getName() const;
        void equip(AMateria* m);
        void unequip(int idx);
        void use(int idx, Character& target);
        ~Character();
};

#endif