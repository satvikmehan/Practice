#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Base1
{
    protected:
        int base1int;
    public:
        void setbase1int(int a)
        {
            base1int=a;
        }
};

class Base2
{
    protected:
        int base2int;
    public:
        void setbase2int(int a)
        {
            base2int=a;
        }
};

class Base3
{
    protected:
        int base3int;
    public:
        void setbase3int(int a)
        {
            base3int=a;
        }
};

class Derived : public Base1 , public Base2 ,public Base3
{
    public:
        void show()
        {
            cout<<"The value of Base 1 is "<<base1int<<endl;
            cout<<"The value of Base 2 is "<<base2int<<endl;
            cout<<"The value of Base 3 is "<<base3int<<endl;
            cout<<"The sum of these values is "<<base1int+base2int+base3int<<endl;
        }

};

int main()
{
    Derived sam;
    sam.setbase1int(18);
    sam.setbase2int(7);
    sam.setbase3int(45);
    sam.show();
    return 0;
}