#include <iostream>
using namespace std;

struct Employee
{
    int id;
    char name[20];
    float salary;
};

int main()
{
    Employee e;

    cout<<"Enter employee id: ";
    cin>>e.id;

    cout<<"Enter employee name: ";
    cin>>e.name;

    cout<<"Enter salary: ";
    cin>>e.salary;

    cout<<"\nEmployee details\n";
    cout<<e.id<<endl;
    cout<<e.name<<endl;
    cout<<e.salary;

    return 0;
}