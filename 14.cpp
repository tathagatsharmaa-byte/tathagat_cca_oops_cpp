#include <iostream>
using namespace std;

struct Student
{
    int roll;
    float marks;
};

int main()
{
    Student s1, s2;

    cout<<"Enter first student's roll and marks: ";
    cin>>s1.roll>>s1.marks;

    cout<<"Enter second student's roll and marks: ";
    cin>>s2.roll>>s2.marks;

    cout<<"\nFirst student: ";
    cout<<s1.roll<<" "<<s1.marks<<endl;

    cout<<"Second student: ";
    cout<<s2.roll<<" "<<s2.marks;

    return 0;
}