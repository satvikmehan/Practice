#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class employee
{
    private:
        int a,b,c;
    public:
        int d,e;
        void setData(int a1,int b1,int c1);//Declaration
        void getdata()//Declare and Design
        {
            cout<<"The value of a is: "<<a<<endl;
            cout<<"The value of b is: "<<b<<endl;
            cout<<"The value of c is: "<<c<<endl;
            cout<<"The value of d is: "<<d<<endl;
            cout<<"The value of e is: "<<e<<endl;
        }

};

void employee :: setData(int a1,int b1,int c1)
{
    a=a1;
    b=b1;
    c=c1;
}

int main()
{
    employee sam;
    //sam.a=10; // a is private
    sam.d=7;
    sam.e=18;
    sam.setData(1,2,4);
    sam.getdata();
    
    return 0;
}