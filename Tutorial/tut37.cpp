#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Employee
{
    public:
        float salary;
        int id;
        Employee(int inpId)
        {
            id=inpId;
            salary=34.0;
        }
        Employee() {};
        
};

class Programmer : public Employee
{

    public:
        int languageCode;
        void getdata()
        {
            cout<<id<<endl;
        }

        Programmer(int inpId)
        {
            id=inpId;
            languageCode=9;
        }
};

int main()
{
    Employee sam(1),sam1(2),sam2(3);
    cout<<sam.salary<<endl;
    cout<<sam1.salary<<endl;
    cout<<sam2.salary<<endl;
    Programmer skillF(10);
    cout<<skillF.languageCode<<endl;
    cout<<skillF.id<<endl;
    skillF.getdata();
    return 0;
}