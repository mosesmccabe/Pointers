// Call by reference
#include <iostream>
using namespace std;

void Increment(int *p)  // this function only accept memory address
{                       // of int.
    
    *p = *p + 1;     // deferencing
}

int main()
{
    int a = 10;
    Increment(&a);     // pass the address of a
    cout << a << endl; // a is now 10
    
}