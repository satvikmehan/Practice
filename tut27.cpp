#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Complex;

class calculator
{
    public:
        int add(int a, int b)
        {
            return a+b;
        }

        int sumRealComplex(Complex,Complex);
        int sumComplex(Complex,Complex);
};

class Complex
{
    int a,b;
    // friend int calculator :: sumRealComplex(Complex,Complex);
    // friend int calculator :: sumComplex(Complex,Complex);

    friend class calculator;
    public:
        void setNumber(int n1,int n2)
        {
            a=n1;
            b=n2;
        }
        void printNumber()
        {
            cout<<"Your number is "<<a<<" + "<<b<<"i"<<endl;
        }             
};


int calculator :: sumRealComplex(Complex o1, Complex o2)
{
     return (o1.a+o2.a);
}
int calculator :: sumComplex(Complex o1, Complex o2)
{
     return (o1.b+o2.b);
}

int main()
{
    Complex o1,o2;
    o1.setNumber(1,4);
    o2.setNumber(3,5);
    calculator cal;
    int res=cal.sumRealComplex(o1,o2);
    cout<<"The sum of real part of two numbers are:"<<res<<endl;
    int result=cal.sumComplex(o1,o2);
    cout<<"The sum of complex part of two numbers are:"<<result<<endl;
    return 0;
}