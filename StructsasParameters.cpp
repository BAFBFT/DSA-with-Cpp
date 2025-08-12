#include <iostream>
using namespace std;

typedef struct {
    int length;
    int breadth;
} rect;

// Calculate the area of this struct
int area(rect r1)
{
    return r1.length * r1.breadth;
}

int main()
{
    rect r = {2, 5};
    cout<<area(r)<<endl;
    
    return 0;
}