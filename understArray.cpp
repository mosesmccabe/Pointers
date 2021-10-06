/*
    Understand how array work in 
    memory.
*/
#include <iostream>
using namespace std;

int main()
{
    const int Size = 5;
    int A[Size] = {2,4,8,1,9};
    
    for (int i = 0; i < Size; i++)
        cout << &A[i] << "  -  Address\n"       // & - return the address of a variable
             << A+i   << "  -  Address\n"       // base Address + 4 bytes
             << A[i]  << "  -  Value\n"         // accessing element of the array
             << *(A+i) << "  -  Values\n";      // * - dereferencing (base address + 4 bytes)
    
    return 0;
}