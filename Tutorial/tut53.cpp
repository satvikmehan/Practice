#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class A
{
    int a;
    public:
        A setData(int a)
        {
            this->a=a;
            return *this;
        }
        void getData()
        {
            cout<<"The value of a is "<<a;
        }
};


int main()
{
    A a;
    a.setData(1).getData();
    //a.getData();
    return 0;
}