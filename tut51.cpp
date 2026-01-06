#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Complex
{
    int real,imaginary;
    public:
        void getData()
        {
            cout<<"The real part is :"<<real<<endl;
            cout<<"The Imaginary  part is :"<<imaginary<<endl;
        }

        void setData(int a, int b)
        {
            real=a;
            imaginary=b;
        }


};

int main()
{
    Complex c;  
    Complex *ptr=new Complex ;
    Complex *pt=&c;
    ptr->setData(100,50);
    c.setData(18,7);
    (*pt).getData();
    (*ptr).getData();

    Complex *arr = new Complex[5];
    arr->setData(0,1);
    (arr+1)->setData(5,10);
    arr->getData();
    (arr+1)->getData();



    


    
    return 0;
}