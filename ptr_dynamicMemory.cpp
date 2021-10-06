#include <iostream>
using namespace std;

int tot;

int Square(int x)
{
    return x*x;
}

int SquareOfSum(int x, int y)
{
    int z = Square(x+y);
    return z;
}

int main()
{
    int a = 4, b = 6;
    tot = SquareOfSum(a,b);
    cout << tot << endl;
    
    return 0;
}