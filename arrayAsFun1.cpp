





// Passing array to function using it address
#include <iostream>
using namespace std;

int SumOfElement(int A[])   // this is really: int *A
{
    int sum = 0;
    for(int i = 0; i < 5; i++)
    {
        sum += A[i];
    }
    
    return sum;
}

int main()
{
    int A[] = {1,2,3,4,5};
    int total = SumOfElement(A);    // this really: passed the base address of array
    cout << total << endl;
}