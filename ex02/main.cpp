/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaouni <aaouni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 23:15:08 by aaouni            #+#    #+#             */
/*   Updated: 2023/02/22 03:11:29 by aaouni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bases.hpp"

int main(){

    Base* t = generate();
    identify(t);

    Base* y = generate();
    identify(y);

    Base* g = generate();
    identify(*g);

    Base* h = generate();
    identify(*h);
    
}

