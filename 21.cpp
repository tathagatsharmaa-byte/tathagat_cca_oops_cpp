#include <iostream>
using namespace std;

union Data
{
    int a;
    float b;
};

int main()
{
    Data d;

    d.a=10;

    cout<<"Value = "<<d.a;

    return 0;
}