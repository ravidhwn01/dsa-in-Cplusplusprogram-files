
#include <iostream>
using namespace std;
int main()
{
	int x = 10, a;

	a = ++x;
	cout << "Pre Increment Operation";

	// Value of a will change
	cout << "\na = " << a;

	// Value of x change before execution of a=++x;
	cout << "\nx = " << x;
 
  a = x++;
 
    cout << "Post Increment Operation";
 
    // Value of a will not change
    cout << "\na = " << a;
 
    // Value of x change after execution of a=x++;
    cout << "\nx = " << x;

	return 0;
}
