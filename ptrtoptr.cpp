  /*  pointer to pointer
    pointer that hold the address of other pointer
 */
#include <iostream>
using namespace std;

int main()
{
    int a = 8;
    int *p = &a;
    
    cout << "\nWorking with Pointer  Ex:\n\ta = 8\n\t*p = &a -- pointer to int\n"
    << "-----------------------------------------------------------------\n";
    cout << &a << "  -  &a = address of a\n"
         << p  << "  -   p = address of a\n"
         << &p << "  -  &p = addrss of p\n\n";
    
    // Pointer to Pointer variable
    
    int **p2 = &p;  // pointer to pointer
    
    cout << "\nPointer to Pointer  Ex1:\n\t**p2 = &p -- pointer to pointer\n"
        << "-----------------------------------------------------------------\n";
    cout << &p2 << "  -  &p2 = address of p2\n"
         << &p << "  -  &p = address of p\n"
         << p2 << "  -  p2 = address of p\n\n";
    
    
    int x = 5;
    int *ptr = &x;   // pointer to int
    
    *ptr = 6;        // dereferencing - store 6 into x
    
    int **q = &ptr;  // pointer to pointer of int
                   // store address of pointer p
    int ***r = &q; // pointer to "pointer to pointer"
                   // store the address of pointer to pointer
    cout << "\nPointer to Pointer  Ex2:\n"
         << "\t   x = 5\n"
         << "\t*ptr = &x   -- pointer to int\n"
         << "\t **q = &ptr -- pointer to pointer \n"
         << "\t***r = &q   -- pointer to a \"pointer to pointer\"\n"
         << "-----------------------------------------------------------------\n";
    cout << *ptr << "                -   *ptr = value of x\n"
         << *q << "   -   *q = value store in pointer ptr\n"
         << "                        = which is address of x\n"
         << **q << "                -   **q = dereferencing value store in pointer ptr\n"
         << "                         = value of x\n"
         << **r << "   - **r = dereferencing value store in **q\n"
         << "                       = which is address of x\n"
         << ***r << "                - ***r = deferencing value store in pointer ptr\n"
         << "                        = which is value of x\n";

    ***r = 20;  // change the value of x
    cout << x << "               - ***r = change the value of x\n\n";
    
    return 0;
}



















































