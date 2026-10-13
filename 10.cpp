#include <iostream>
using namespace std;

enum Result {FAIL, PASS};

int main()
{
Result r=PASS;

if(r==PASS)
    cout<<"Student passed";
else
    cout<<"Student failed";

return 0;

}