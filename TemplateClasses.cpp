#include <iostream>
using namespace std;

template<class T>
class Arithmetic
{
private:
    T a;
    T b;
public:
    Arithmetic(T a, T b);
    T add();
    T sub();
};

// we use :: for scope resolution (definte the order in which a program searches for variables)
template<class T>
Arithmetic<T>::Arithmetic(T a, T b)
{
    // Every object in C++ have access to their own adress
    // 'this' pointer is implicitly passed to all non-static member functions
    // in this code snippet we are assigning the class object to the values a and b
    // this allows the values to be used in other methods in the code
    this->a=a;
    this->b=b;
}

template<class T>
T Arithmetic<T>::add()
{
    T c;
    c=a+b;
    return c;
}

template<class T>
T Arithmetic<T>::sub()
{
    T c;
    c=a-b;
    return c;
}

int main()
{
    Arithmetic<float> ar(10, 5), ar1(15, 7);
    cout <<"Add "<<ar.add()<<endl;
    cout <<"Subtract "<<ar.sub()<<endl;
    
    return 0;
}