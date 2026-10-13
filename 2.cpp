#include <iostream>
using namespace std;

int main()
{
int a[5], i, sum=0;

cout<<"Enter 5 numbers: ";
for(i=0; i<5; i++)
{
    cin>>a[i];
    sum=sum+a[i];
}

cout<<"Sum = "<<sum;

return 0;

}