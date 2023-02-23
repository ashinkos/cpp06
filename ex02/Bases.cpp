/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bases.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaouni <aaouni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 02:32:28 by aaouni            #+#    #+#             */
/*   Updated: 2023/02/23 02:30:58 by aaouni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bases.hpp"

Base::~Base(){}

A::~A(){}
B::~B(){}
C::~C(){}


Base *generate(void)
{
    static int i =-1;

    i++;

    if (i % 3 == 0)
        return (new A);
    else if (i % 3 == 1)
        return (new B);
    else
        return (new C);
}
void identify(Base *p)
{

    A *a = dynamic_cast<A *>(p);
    B *b = dynamic_cast<B *>(p);
    C *c = dynamic_cast<C *>(p);
    if (a)
    {
        std::cout << "A" << std::endl;
        
        return;
    }
    else if (b)
    {
        std::cout << "B" << std::endl;
        return;
    }
    else if (c)
    {
        std::cout << "C" << std::endl;
        return;
    }
    std::cout << "unknown type" << std::endl;
}

void identify(Base &p)
{
    try
    {
        A &a = dynamic_cast<A &>(p);
        std::cout << "A :" << &a << std::endl;
    }
    catch (...)
    {
        try
        {
            B &b = dynamic_cast<B &>(p);
            std::cout << "B :" << &b << std::endl;
        }
        catch (...)
        {
            try
            {
                C &c = dynamic_cast<C &>(p);
                std::cout << "C :" << &c << std::endl;
            }
            catch(...)
            {
                std::cout << "unknown type" << std::endl;
            }
            
        }
    }
    
}