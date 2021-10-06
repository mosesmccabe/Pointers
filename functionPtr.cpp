#include <iostream>
using namespace std;

int Add(int a, int b)
{
    return a+b;
}

int main()
{
    int c;
    
    /*
     
    // Pointer to Function
    int (*p)(int, int);
    p = &Add;  // pass the function address to the pointer
    
    */
    
    // Pointer to Function
    int (*p)(int, int);
    p = Add;       // just the function name will return the starting address of the function.
    c = p(2,3);    // de-referencing and executing the function.
    cout << "\n" << c << "\n\n";
    
    return 0;
    
}