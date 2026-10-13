#include <iostream>
using namespace std;

union Data
{
    int a;
    float b;
    char c;
};

int main()
{
    Data d;

    cout << "Size of union = " << sizeof(d);

    return 0;
}