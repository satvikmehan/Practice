#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Complex
{
    int a,b;
    public:
        Complex(int,int);
        void printData()
        {
            cout<<"Your number is "<<a<<" + "<<b<<"i"<<endl;
        }
};

Complex::Complex(int x,int y)
{
    a=x;
    b=y;
}

int main()
{
    Complex a(4,5);
    Complex b = Complex(5,7);
    a.printData();
    b.printData();
    return 0;
}