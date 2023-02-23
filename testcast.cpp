#include <iostream>

int main(){

    bool    b = 35;
    std::cout << "b = " << b << std::endl;
    int     i = b;
    std::cout << "i1 = " << i << std::endl;
    i = 3.14;
    std::cout << "i2 = " << i << std::endl;
    float pi = i;
    std::cout << "pi = " << pi << std::endl;
    unsigned char c = -1;
    std::cout << "c = " << c << std::endl;

}
/*1*. const_cast:
const_cast is used to cast away the constness of variables. Following are some interesting facts about const_cast.

1) const_cast can be used to change non-const class members inside a const member function. Consider the following code snippet. Inside const member function fun(), ‘this’ is treated by the compiler as ‘const student* const this’, i.e. ‘this’ is a constant pointer to a constant object, thus compiler doesn’t allow to change the data members through ‘this’ pointer. const_cast changes the type of ‘this’ pointer to ‘student* const this’.
2)const_cast can be used to pass const data to a function that doesn’t receive const. For example, in the following program fun() receives a normal pointer, but a pointer to a const can be passed with the help of const_cast.
3) It is undefined behavior to modify a value which is initially declared as const. Consider the following program. The output of the program is undefined. The variable ‘val’ is a const variable and the call ‘fun(ptr1)’ tries to modify ‘val’ using const_cast.

4) const_cast is considered safer than simple type casting. It’safer in the sense that the casting won’t happen if the type of cast is not same as original object. For example, the following program fails in compilation because ‘int *’ is being typecasted to ‘char *’

5) const_cast can also be used to cast away volatile attribute. For example, in the following program, the typeid of b1 is PVKi (pointer to a volatile and constant integer) and typeid of c1 is Pi (Pointer to integer)

*******************************

*2*. Static Cast: This is the simplest type of cast that can be used. It is a compile-time cast. It does things like implicit conversions between types (such as int to float, or pointer to void*), and it can also call explicit conversion functions (or implicit ones).

******************************

*3* .Dynamic Cast: A cast is an operator that converts data from one type to another type. In C++, dynamic casting is mainly used for safe downcasting at run time. To work on dynamic_cast there must be one virtual function in the base class. A dynamic_cast works only polymorphic base class because it uses this information to decide safe downcasting.
    **Downcasting: Casting a base class pointer (or reference) to a derived class pointer (or reference) is known as downcasting. In figure 1  casting from the Base class pointer/reference to the “derived class 1” pointer/reference showing downcasting (Base ->Derived class).

    **Upcasting: Casting a derived class pointer (or reference) to a base class pointer (or reference) is known as upcasting. In figure 1 Casting from Derived class 2 pointer/reference to the “Base class” pointer/reference showing Upcasting (Derived class 2 -> Base Class).
As we mention above for dynamic casting there must be one Virtual function. Suppose If we do not use the virtual function, then what is the result?

In that case, it generates an error message “Source type is not polymorphic”.

******************************

*4* .Reinterpret_cast: is a type of casting operator used in C++. 
 
It is used to convert a pointer of some data type into a pointer of another data type, even if the data types before and after conversion are different.
It does not check if the pointer type and data pointed by the pointer is same or not.
Syntax : 
    data_type *var_name = reinterpret_cast <data_type *>(pointer_variable);
Return Type :
    It doesn’t have any return type. It simply converts the pointer type.
Purpose for using reinterpret_cast :
    reinterpret_cast is a very special and dangerous type of casting operator. And is suggested to use it using proper data type i.e., (pointer data type should be same as original data type).
    It can typecast any pointer to any other data type.
    It is used when we want to work with bits.
    If we use this type of cast then it becomes a non-portable product. So, it is suggested not to use this concept unless required.
    It is only used to typecast any pointer to its original type.
    Boolean value will be converted into integer value i.e., 0 for false and 1 for true.
*/

// CPP program to demonstrate working of
// reinterpret_cast
#include <iostream>
using namespace std;

int main()
{
	int* p = new int(65);
	char* ch = reinterpret_cast<char*>(p);
	cout << *p << endl;
	cout << *ch << endl;
	cout << p << endl;
	cout << ch << endl;
	return 0;
}

