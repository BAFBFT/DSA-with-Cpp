#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    int &r = a;

    //changing r changes a and vice versa
    // r = 25;
    cout<<r<<endl;

    return 0;
}