/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaouni <aaouni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 23:00:58 by aaouni            #+#    #+#             */
/*   Updated: 2023/02/21 23:13:15 by aaouni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
struct Data
{
    int i;
    std::string str;
    bool b;
};

uintptr_t serialize(Data* ptr){
    return reinterpret_cast<uintptr_t>(ptr);
}

Data* deserialize(uintptr_t raw){
    return reinterpret_cast<Data*>(raw);
}

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