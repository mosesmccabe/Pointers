// Passing array to function using it address
#include <iostream>
using namespace std;

int SumOfElement(int *A, int size)
{
    int sum = 0;
    for(int i = 0; i < size; i++)
    {
        sum += A[i]; // A[i] is *(A+i)
    }
    
    return sum;
}

void Double(int *A, int size)
{
    for(int i = 0; i < size; i++)
    {
        A[i] = 2 * A[i]; // mult. each element by 2
    }
}

int main()
{
    const int max = 5;
    int A[max] = {1,2,3,4,5};
    int total = SumOfElement(A,max);  // return the sum of array element
    cout << total << endl;
    
    
    Double(A,max);     // modify the element of the array
    cout << "The new elements of the array:\n";
    for(int i = 0; i < max; i++)
    {
        cout << A[i] << " ";
        
    }
    cout << endl;
}