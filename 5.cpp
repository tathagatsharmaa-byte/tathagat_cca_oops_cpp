#include <iostream>
using namespace std;

int main()
{
int a[5], i, n, found=0;

cout<<"Enter 5 numbers: ";
for(i=0; i<5; i++)
{
    cin>>a[i];
}

cout<<"Enter number to search: ";
cin>>n;

for(i=0; i<5; i++)
{
    if(a[i]==n)
    {
        found=1;
        break;
    }
}

if(found==1)
    cout<<"Number found";
else
    cout<<"Number not found";

return 0;

}