#include <iostream>
using namespace std;

struct Rectangle 
{
    int length;
    int breadth;
    char x; 
};

struct Rectangle r1;

int main() 
{   
    r1 = {10, 5};

    cout<<r1.length<<endl;
    
    return 0;
}