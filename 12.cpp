#include <iostream>
using namespace std;

struct Complex
{
    int real;
    int img;
};

int main()
{
    Complex a, b, c;

    cout<<"Enter real and imaginary part of first number: ";
    cin>>a.real>>a.img;

    cout<<"Enter real and imaginary part of second number: ";
    cin>>b.real>>b.img;

    c.real=a.real+b.real;
    c.img=a.img+b.img;

    cout<<"Sum = "<<c.real<<" + "<<c.img<<"i";

    return 0;
}