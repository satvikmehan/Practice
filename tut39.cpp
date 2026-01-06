#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Base
{
    protected:
        int a;
    private:
        int b;
};

class Derived : protected Base
{


};

int main()
{
    Base b;
    Derived d;
    cout<<b.a;
    cout<<d.a;
    return 0;
}