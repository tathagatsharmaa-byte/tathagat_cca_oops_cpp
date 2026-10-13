#include <iostream>
using namespace std;

int main()
{
    int a, b, sum;
    int *p, *q;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    p = &a;
    q = &b;

    sum = *p + *q;

    cout << "Sum = " << sum;

    return 0;
}