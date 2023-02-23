/*Case 3:Now take one more case of dynamic_cast, If the cast fails and new_type is a reference type, 
it throws an exception that matches a handler of type std::bad_cast and gives a warning: 
dynamic_cast of “Derived d1” to “class  Derived2&” can never succeed. 

Note:

A Dynamic_cast has runtime overhead because it checks object types at run time using “Run-Time Type Information“.
If there is a surety we will never cast to wrong object then always avoid dynamic_cast and use static_cast. */

// C++ Program demonstrate if the cast
// fails and new_type is a reference
// type it throws an exception
#include <exception>
#include <iostream>
using namespace std;

// Base class declaration
class Base {
	virtual void print()
	{
		cout << "Base" << endl;
	}
};

// Derived1 class
class Derived1 : public Base {
	void print()
	{
		cout << "Derived1" << endl;
	}
};

// Derived2 class
class Derived2 : public Base {
	void print()
	{
		cout << "Derived2" << endl;
	}
};

// Driver Code
int main()
{
	Derived1 d1;
	Base* bp = dynamic_cast<Base*>(&d1);

	// Type casting
	Derived1* dp2 = dynamic_cast<Derived1*>(bp);
	if (dp2 == nullptr)
		cout << "null" << endl;
	else
		cout << "not null" << endl;

	// Exception handling block
	try {
		Derived2& r1 = dynamic_cast<Derived2&>(d1);
	}
	catch (std::exception& e) {
		cout << e.what() << endl;
	}

	return 0;
}

