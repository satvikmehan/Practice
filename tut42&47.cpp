#include<iostream>
#include<bits/stdc++.h>
#include<math.h>
using namespace std;

class SimpleCalculator
{
    int a;
    int b;
    int result;
    public:
        void getDataSimple()
        {
            cout<<"Enter the value of first number"<<endl;
            cin>>a;
            cout<<"Enter the value of second number"<<endl;
            cin>>b;
        }
        void add()
        {
            result=a+b;
        }
        void sub()
        {
            result=a-b;
        }
        void multiply()
        {
            result=a*b;
        }
        void divide()
        {
            result=a/b;
        }
        void displaySimple()
        {
            cout<<result<<endl;
        }
};

class ScientificCalculator
{
    int a;
    int b;
    int result;
    public:
        void getDataScientific()
        {
            cout<<"Enter the value of first number"<<endl;
            cin>>a;
            cout<<"Enter the value of second number"<<endl;
            cin>>b;
        }
        void cosF()
        {
            result=cos(a)+cos(b);
        }
        void sinF()
        {
            result=sin(a+sin(b));
        }
        void tanF()
        {
            result=tan(a)+tan(b);
        }
        void expF()
        {
            result=exp(a);
        }
        void displayScientific()
        {
            cout<<result<<endl;
        }

};

class HybridCalculator : public SimpleCalculator , public ScientificCalculator
{

};

int main()
{
    HybridCalculator sam;
    sam.getDataSimple();
    sam.getDataScientific();
    sam.add();
    sam.displaySimple();
    sam.expF();
    sam.displayScientific();
    return 0;
}