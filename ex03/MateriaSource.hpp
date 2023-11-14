/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkouaz <kkouaz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 14:21:09 by kkouaz            #+#    #+#             */
/*   Updated: 2023/11/14 11:54:31 by kkouaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"
#include"AMateria.hpp"

class MateriaSource : public IMateriaSource
{
    private:
        AMateria* _m[4];
        AMateria* backup[4];
    public:
        MateriaSource();
        MateriaSource(MateriaSource& other);
        MateriaSource& operator=(MateriaSource& other);
        void learnMateria(AMateria* m);
        AMateria* createMateria(std::string const & type);
        ~MateriaSource();
};

#endif