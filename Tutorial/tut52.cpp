#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Shop
{
    int id;
    float price;
    public:
        void setData(int a,float b)
        {
            id=a;
            price=b;
        }
        void getData()
        {
            cout<<"Code of the item is "<<id<<endl;
            cout<<"Price of this item is "<<price<<endl;
        }

};

int main()
{ 
    int size=2;
    Shop *ptr=new Shop[size];  
    int p;
    float q;
    Shop* ptrTemp=ptr;
    for(int i=0;i<size;i++)
    {
        cout<<"Enter Id and price of item "<<i+1<<endl;
        cin>>q>>p;
        ptr->setData(q,p);
        ptr++;
    }

    ptr=ptrTemp;
    for(int i=0;i<size;i++)
    {
        cout<<"Item number: "<<i+1<<endl;
        ptr->getData();
        ptr++;
    }
    return 0;
}