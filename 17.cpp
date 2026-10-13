#include <iostream>
using namespace std;

int main()
{
    int a=25;
    int *p;

    p=&a;

    cout<<"Value of a = "<<a<<endl;
    cout<<"Value using pointer = "<<*p;

    return 0;
}