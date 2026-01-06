#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Simple
{
    int data1;
    int data2;
    int data3;
    public:
        Simple(int a,int b=9,int c=8)
        {
            data1=a;
            data2=b;
            data3=c;
        }

        void printData()
        {
            cout<<"The value of data is "<<data1<<","<<data2<<" and "<<data3<<endl;
        }
};

int main()
{
    Simple s(1,4);
    s.printData();

    Simple s1(1);
    s1.printData();

    Simple s2(1,2,3);
    s2.printData();
    return 0;
}