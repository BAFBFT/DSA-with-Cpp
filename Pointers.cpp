#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int A[5] = {2, 4, 6, 8, 10};
    int *p;
    int *p1;
    p = A;

    // for (int i=0;i<5;i++)
    // {
    //     cout<<A[i]<<endl;
    // }

    for (int i=0;i<5;i++)
    {
        cout<<p[i]<<endl;
    }

    //lets create an array in the heap
    p1 = new int[5];
    for (int i=0;i<5;i++)
    {
        p[i] = rand() % 101;
        cout<<p[i]<<endl;
    }

    delete [ ] p1;

    return 0;
}