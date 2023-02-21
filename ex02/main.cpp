/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaouni <aaouni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 23:15:08 by aaouni            #+#    #+#             */
/*   Updated: 2023/02/22 00:22:29 by aaouni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Base
{
    public:
        Base(){};
        virtual ~Base(){};
};

class A : public Base
{
    ~A(){};
};

class B : public Base
{
    ~B(){};
};
class C : public Base
{
    ~C(){};
};

Base *generate(void)
{
    static int i =-1;

    i++;

    if (i % 3 == 0)
        return (new A);
    else if ( i% 3 == 1)
        return (new B);
    else
        return (new C);
}
void identify(Base *p)
{

    A *a = dynamic_cast<A *>(p);
    B *b = dynamic_cast<B *>(p);
    C *c = dynamic_cast<C *>(p);
    if (a != nullptr)
    {
        std::cout << "A" << std::endl;
        return;
    }
    else if (b != nullptr)
    {
        std::cout << "B" << std::endl;
        return;
    }
    else if (c != nullptr)
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
        std::cout << "A" << std::endl;
    }
    catch (...)
    {
        try
        {
            B &b = dynamic_cast<B &>(p);
            std::cout << "B" << std::endl;
        }
        catch (...)
        {
            try
            {
               C &c = dynamic_cast<C &>(p);
                std::cout << "C" << std::endl;
            }
            catch(...)
            {
                std::cout << "unknown type" << std::endl;
            }
            
        }
    }
    
}

int main(){

    Base* t = generate();
    identify(*t);

    Base* y = generate();
    identify(*y);
    
}

