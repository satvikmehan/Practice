#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Base1
{
    int data;
    public:
        Base1(int i)
        {
            data=i;
            cout<<"Base1 class constructor called"<<endl; 
        }
        void print_data1()
        {
            cout<<"The value of data is:"<<data<<endl;
        }
};

class Base2
{
    int data;
    public:
        Base2(int i)
        {
            data=i;
            cout<<"Base2 class constructor called"<<endl; 
        }
        void print_data2()
        {
            cout<<"The value of data is:"<<data<<endl;
        }
};

// class Derived : public Base1 , public Base2
// {
//     int derived1;
//     int derived2;
//     public:
//         Derived(int a,int b ,int c,int d): Base1(a),Base2(b)
//         {
//             derived1=c;
//             derived2=d;
//             cout<<"Derived class constructor is called"<<endl;
//         }
//         void printData()
//         {
//             cout<<"The value of derived1 is:"<<derived1<<endl;
//             cout<<"The value of derived2 is:"<<derived2<<endl;
//         } 
// };

class Derived : public Base2 , public Base1
{
    int derived1;
    int derived2;
    public:
        Derived(int a,int b ,int c,int d): Base1(a),Base2(b)
        {
            derived1=c;
            derived2=d;
            cout<<"Derived class constructor is called"<<endl;
        }
        void printData()
        {
            cout<<"The value of derived1 is:"<<derived1<<endl;
            cout<<"The value of derived2 is:"<<derived2<<endl;
        } 
};

int main()
{
    Derived sam(1,2,3,4);
    sam.print_data1();
    sam.print_data2();
    sam.printData();

    return 0;
}