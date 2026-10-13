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

    d.b = 12.5;

    cout << "Value = " << d.b;

    return 0;
}