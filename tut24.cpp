#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class employee
{
    int id;
    static int count;
    public:
        void setData()
        {
            cout<<"Enter the ID"<<endl;
            cin>>id;
            count++;
        }
        void getData()
        {
            cout<<"The id of the employee is "<<id<<" and this is employee number "<<count<<endl;
        }

        static void getCount() ///Can only access static member
        {
            //cout<<id;
            cout<<"The value of count is"<<count<<endl;
        }
};

int employee::count; //Default value is 0


int main()
{
    employee sam,ram,lam;
    // sam.id=1;  //private
    // sam.count=1;


    sam.setData();
    sam.getData();
    employee::getCount();//don't need object because static is common

    ram.setData();
    ram.getData();
    employee::getCount();

    lam.setData();
    lam.getData();
    employee::getCount();

    return 0;
}