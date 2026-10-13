#include <iostream>
using namespace std;

int main()
{
    int a, b, temp;
    int *p, *q;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    p = &a;
    q = &b;

    temp = *p;
    *p = *q;
    *q = temp;

    cout << "After swapping: ";
    cout << a << " " << b;

    return 0;
}