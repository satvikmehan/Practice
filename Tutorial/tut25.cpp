#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class employee
{
    int id;
    int salary;
    public:
        void setId()
        {
            salary=111;
            cout<<"Enter the ID of the employee "<<endl;
            cin>>id;
        }

        void getId()
        {
            cout<<"The ID of this emplyee is "<<id<<endl;
        }

};
int main()
{
    // employee sam1,sam2,sam3,sam4,sam5;
    // sam1.setId();
    // sam1.getId();

    employee sam[6];
    for(int i=0;i<6;i++)
    {
        sam[i].setId();
        sam[i].getId();
    }
    
    return 0;
}