#include <iostream>
using namespace std;

int compare(int a, int b)   // function 1
{
    if(a > b)
        return 1;
    else
        return -1;
}

//              ptr variable        pointer to function
void BubbleSort(int *A, int n, int (*ptr)(int,int))
{
    int temp;
    for(int i = 0; i < n; i++)
        for (int j = 0; j<n-1; j++)
        {
            if (ptr(A[j],A[j+1]) > 0) // ptr is being using to call function 1
            {
                temp = A[j];
                A[j] = A[j+1];
                A[j+1] = temp;
            }
        }
}

int main()
{
    const int MaxSize = 6;
    int arr[MaxSize] = {3,2,1,5,6,4};
    BubbleSort(arr,MaxSize,compare); // pass a array (pointer), int, and a function
    
    for (int i = 0; i < MaxSize; i++)
        cout << arr[i] << " ";
    cout << endl;
    
    return 0;
}
