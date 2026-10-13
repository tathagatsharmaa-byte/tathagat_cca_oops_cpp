#include <iostream>
using namespace std;

union Data
{
    int a;
    char ch;
};

int main()
{
    Data d;

    d.ch = 'A';

    cout << "Character = " << d.ch;

    return 0;
}