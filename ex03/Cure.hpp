/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkouaz <kkouaz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 19:30:48 by kkouaz            #+#    #+#             */
/*   Updated: 2023/11/11 19:31:37 by kkouaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include"AMateria.hpp"


class Cure : public AMateria
{
    public :
        Cure();
        Cure(Cure& other);
        Cure& operator=(Cure& other);
        AMateria* clone() const;
        void use(ICharacter& Character);
        ~Cure();
};


#endif