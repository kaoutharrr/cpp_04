/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkouaz <kkouaz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 17:39:57 by kkouaz            #+#    #+#             */
/*   Updated: 2023/11/11 18:33:52 by kkouaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include<iostream>

class AMateria
{
    protected:
        std :: string MateriaType;
    public:
    AMateria(void);
    AMateria(std::string const & type);
    AMateria(AMateria &other);
    AMateria& operator=(AMateria &other);
    std::string const & getType() const; //Returns the materia type
    virtual AMateria* clone() const = 0;
    virtual ~AMateria();
};



#endif