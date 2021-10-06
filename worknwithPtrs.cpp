#include <iostream>
using namespace std;

int main()
{
    int a;
    int b = 20;
    int *p = nullptr;
    
    
    cout << "\n\nNo value assign to any variable\n"
         << "-----------------------------------\n"
         << &p << "  -  &p = address of p\n"
         << &a << "  -  &a =  address of a\n\n";
    
    a = 10;
    p = &a;  // &a = address of a
    
    cout << "p = &a -- p point to a\n"
         << "-------------------------------------------\n"
         << p << "  -    p = address of a\n"
         << &a << "  -  &a =  address of a\n\n"
    
         << "[p = &a]  p store the address of a\n"
         << "-------------------------------------------\n"
         << *p << "  -  *p = derefrencing of p\n"
         << "          = p display the value of the variable it pointing to\n"
         << a << "  -   a =  dispaly a value\n\n";
    
    *p = 25;  // derefrencing
    
    cout << "*p = 25  -- use p to assign value to a\n"
         << "--------------------------------------\n"
         << *p << "  -  *p = derefrencing of p\n"
         << "          = p display the value of the variable it pointing to\n"
         << a << "  -   a =  dispaly a value\n\n";

    *p = b;  //derefrecing - assign 20 to variable a
    cout << "*p = b -- use p to assign value to a\n"
         << "------------------------------------\n"
         << *p << "  -  *p = derefrencing of p\n"
         << "          = p display the value of the variable it pointing to\n"
         << a << "  -   a =  dispaly a value\n\n"
    
         << "p still point to a\n"
         << "-------------------------------------------\n"
         << p << "  -    p = address of a\n"
         << &a << "  -  &a =  address of a\n\n";
    
    cout << "\n\n\n";
     
     
    return 0;
}


























































