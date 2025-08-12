// return an integer array by allocating memory for it
int* fun(int n)
{
    int *arr = new int[n];

    return arr;
}

int main()
{
    int [] arr1;
    arr1 = fun(3);

    for (int i = 0; i < 3; i++)
    {
        arr1[i] = i;
        cout<<arr[i]<<endl; 
    }

    delete [] arr1;

    return 0;
}