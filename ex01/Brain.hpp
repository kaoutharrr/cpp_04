/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkouaz <kkouaz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 16:30:35 by kkouaz            #+#    #+#             */
/*   Updated: 2023/11/14 07:24:29 by kkouaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include<iostream>
class Brain
{
    private:
    std :: string ideas[100];
    public:
    Brain();
    Brain(Brain& other);
    Brain& operator=(Brain& other);
    ~Brain();
};

#endif