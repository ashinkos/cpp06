/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaouni <aaouni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 23:00:58 by aaouni            #+#    #+#             */
/*   Updated: 2023/02/22 02:14:02 by aaouni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "serialization.hpp"

int main ()
{
    uintptr_t ptr;
    Data* d;
    Data * d2;
    d = new Data;
    
    d->i = 1;
    d->str = "hello";
    d->b = false;
    std::cout << d << std::endl;
    
    ptr = serialize(d);
    std::cout << ptr << std::endl;
    d2 = deserialize(ptr);
    std::cout << d2 << std::endl;
    
    std::cout << "i = " << d->i << std::endl;
    std::cout << "str = " << d->str << std::endl;
    std::cout << "b = " << d->b << std::endl;

    delete d;
}