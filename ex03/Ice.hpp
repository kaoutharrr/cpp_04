/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkouaz <kkouaz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 18:46:54 by kkouaz            #+#    #+#             */
/*   Updated: 2023/11/11 19:26:53 by kkouaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include"AMateria.hpp"


class Ice : public AMateria
{
    public :
        Ice();
        Ice(Ice& other);
        Ice& operator=(Ice& other);
        AMateria* clone() const;
        void use(ICharacter& Character);
        ~Ice();
};




#endif