/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   serialization.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaouni <aaouni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 02:05:41 by aaouni            #+#    #+#             */
/*   Updated: 2023/02/22 03:03:10 by aaouni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZATION_HPP
#define SERIALIZATION_HPP
#include <iostream>

struct Data
{
    int i;
    std::string str;
    bool b;
};

uintptr_t serialize(Data* ptr);
Data* deserialize(uintptr_t raw);

#endif