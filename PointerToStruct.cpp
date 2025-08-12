#include <iostream>
using namespace std;

typedef struct Rectangle
{
    int length;
    int breadth;
} rectangle;

int main()
{
    rectangle r = {10,5};

    rectangle *p = &r;
    rectangle *p1;

    cout<<p->length<<endl;

    //allocating a rectangle pointer on the heap
    p1 = new rectangle;

    return 0;
}