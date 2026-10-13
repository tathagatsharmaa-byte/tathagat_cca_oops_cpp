#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    int *p;

    p = &a;

    cout << "Before change: " << a << endl;

    *p = 50;

    cout << "After change: " << a;

    return 0;
}