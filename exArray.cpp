#include <iostream>
using namespace std;

void values(int* A, int size)
{
    for(int n = 0; n < size; n++)
    {
        
        for (int i = n+1; i < size; i++)
        {
            int temp;
            if(A[n] > A[i])
            {
                
                temp = A[n];
                A[n] = A[i];
                A[i] = temp;
            }
        }
    }
}

int main()
{
    const int MAX = 5;
    int A[MAX];
    int userInput;
    for(int i = 0; i < MAX; i++)
    {
        cin >> userInput;
        A[i] = userInput;
    }
    
    values(A, MAX);
    
    for(int i = 0; i < MAX; i++)
        cout << A[i] << " ";
    cout << endl;
    return 0;
}