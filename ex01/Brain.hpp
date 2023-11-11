/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkouaz <kkouaz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 16:30:35 by kkouaz            #+#    #+#             */
/*   Updated: 2023/11/11 14:30:46 by kkouaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include<iostream>
class Brain
{
    // private:
    public:
    std :: string ideas[100];
    Brain();
    Brain(Brain& other);
    Brain& operator=(Brain& other);
    ~Brain();
};

#endif