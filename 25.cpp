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

    d.a = 10;
    cout << "Integer value = " << d.a << endl;

    d.b = 5.5;
    cout << "Float value = " << d.b << endl;

    return 0;
}