#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Complex
{
    int a;
    int b;

    public:
    void setData(int v1,int v2)
    {
        a=v1;
        b=v2;
        printNumber();
    }
    void setDataBySum(Complex o1,Complex o2)
    {
        a=o1.a+o2.a;
        b=o1.b+o2.b;
        printNumber();
    }
    void printNumber()
    {
        cout<<"Your complex number is "<<a<<"+"<<b<<"i"<<endl;
    }
        
};

int main()
{
    Complex c1,c2,c3;
    c1.setData(1,2);
    c2.setData(3,4);

    c3.setDataBySum(c1,c2);
    
    return 0;
}