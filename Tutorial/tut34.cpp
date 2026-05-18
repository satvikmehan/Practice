#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Number
{
    int a;
    public:
        Number() {};
        Number(int num)
        {
            a=num;
        }
        Number(Number &obj)
        {
            cout<<"COPY"<<endl;
            a=obj.a;
        }

        void display()
        {
            cout<<"The number for this object is "<<a<<endl;
        }
};

int main()
{
    Number x,y,z(18),a;
    z.display();
    x.display();
    y.display();
    Number z1(z);
    z1.display();
    a=z;
    Number b=x;
    b.display();
    a.display();
    
    return 0;
}