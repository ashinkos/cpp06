/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bases.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaouni <aaouni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 02:32:33 by aaouni            #+#    #+#             */
/*   Updated: 2023/02/22 03:12:52 by aaouni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASES_HPP
#define BASES_HPP
#include <iostream>

class Base
{
    public:
        virtual ~Base();
};

class A : public Base
{
    ~A();
};

class B : public Base
{
    ~B();
};
class C : public Base
{
    ~C();
};

Base *generate(void);
void identify(Base *p);
void identify(Base &p);

#endif
