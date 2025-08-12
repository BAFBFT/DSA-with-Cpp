#include <iostream>
using namespace std;

// return an integer array by allocating memory for it
int* fun(int n)
{
    int *arr = new int[n];

    return arr;
}

int main()
{
    int* arr1;
    arr1 = fun(3);

    // Just checking sizes
    cout<<"Size of arr1: "<<sizeof(arr1)<<endl;
    cout<<"Size of pointer: "<<sizeof(int*)<<endl;
    cout<<"Size of int: " <<sizeof(int)<<endl;

    for (int i = 0; i < 3; i++)
    {
        arr1[i] = i + 1;
        cout<<arr1[i]<<endl; 
    }

    delete[] arr1;

    return 0;
}