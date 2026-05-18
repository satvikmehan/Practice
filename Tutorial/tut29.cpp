#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Complex
{ 
    int a,b;
    public:
        Complex();
        void printData()
        {
            cout<<"Your Number is "<<a<<" + "<<b<<"i"<<endl;
        }
};

Complex::Complex()
{
    a=10;
    b=0;
    //cout<<"Hello";
}

int main()
{
    Complex c1,c2,c3;
    c1.printData();
    c2.printData();
    c3.printData();
    return 0;
}