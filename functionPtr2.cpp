#include <iostream>
using namespace std;

void A()
{
    cout << "\nHello\n\n";
}

void B(void (*ptr)())  // (*ptr) said I accept pointer as a reference
{
    ptr();
}

int main()
{
    B(A);   // so B is pass a function
    
    return 0;
}
