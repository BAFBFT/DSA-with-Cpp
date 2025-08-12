#include <iostream>
using namespace std;

class Rectangle
{
    public:
        int length;
        int breadth;
        Rectangle (int l, int b){ // Constructor with parameters
            length = l;
            breadth = b;
        }
        int area(){
            return length*breadth;
        }
        int perimeter(){
            return 2*(length + breadth);
        }
        ~Rectangle(){
            cout<<"Destructor";
        }
};


int main()
{
    Rectangle r(10, 5);
    cout<<"Area: "<<r.area()<<endl<<"Perimeter: "<<r.perimeter()<<endl;

    return 0;
}