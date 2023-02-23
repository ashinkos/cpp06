/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   serialization.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaouni <aaouni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 02:06:54 by aaouni            #+#    #+#             */
/*   Updated: 2023/02/22 02:29:48 by aaouni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "serialization.hpp"

uintptr_t serialize(Data* ptr){
    return ( reinterpret_cast<uintptr_t>(ptr) );
}

Data* deserialize(uintptr_t raw){
    return ( reinterpret_cast<Data*>(raw) );
}























/*in C++, there are three types of casts: static_cast, dynamic_cast, and reinterpret_cast. Here are the main differences between them:

static_cast: This is the most commonly used cast in C++. It is used to perform conversions between related types, such as converting a float to an int. It can also perform implicit conversions between types, such as converting a pointer to a base class to a pointer to a derived class. The static_cast performs its checks at compile-time and is therefore faster than dynamic_cast.

dynamic_cast: This cast is used for downcasting polymorphic objects. It performs a runtime check to ensure that the cast is safe, and returns a null pointer if the cast is not valid. This is the only safe way to downcast a polymorphic object. dynamic_cast is slower than static_cast, as it needs to perform a runtime type check.

reinterpret_cast: This cast is used to perform conversions between unrelated types, such as converting a pointer to an int. It can also be used to cast a pointer to a different type, such as casting a void* to a pointer to a specific type. This cast is dangerous and should be used with caution, as it can easily introduce bugs and undefined behavior.
In summary, static_cast is used for type conversions between related types, dynamic_cast is used for downcasting polymorphic objects, and reinterpret_cast is used for conversions between unrelated types or for pointer type casting.*/


