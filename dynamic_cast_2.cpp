
/*Case 1: Let’s take an example of dynamic_cast which demonstrates if the casting is successful, 
it returns a value of type new_type.

Explanation: In this program, there is one base class and two derived classes (Derived1, Derived2), 
here the base class pointer hold derived class 1 object (d1). 
At the time of dynamic_casting base class, 
the pointer held the Derived1 object and assigning it to derived class 1, assigned valid dynamic_casting.*/

// C++ Program demonstrates successful
// dynamic casting and it returns a
// value of type new_type
#include <iostream>

using namespace std;
// Base Class declaration
class Base {
	virtual void print()
	{
		cout << "Base" << endl;
	}
};

// Derived1 class declaration
class Derived1 : public Base {
	void print()
	{
		cout << "Derived1" << endl;
	}
};

// Derived2 class declaration
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

	// Base class pointer holding
	// Derived1 Class object
	Base* bp = dynamic_cast<Base*>(&d1);

	// Dynamic_casting
	Derived1* dp2 = dynamic_cast<Derived1*>(bp);
	if (dp2 == nullptr)
		cout << "null" << endl;
	else
		cout << "not null" << endl;

	return 0;
}

