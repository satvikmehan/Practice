#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class c1;
class c2;

class c1
{
    int val;
    public:
        void setData(int a)
        {
            val=a;
        }
        void display()
        {
            cout<<val<<endl;
        }
        friend void exchange(c1 &,c2 &);
};

class c2
{
    int val2;
    public:
        void setData(int a)
        {
            val2=a;
        }
        void display()
        {
            cout<<val2<<endl;
        }
        friend void exchange(c1 &,c2 &);
};

void exchange(c1 &x,c2 &y)
{
    int temp=x.val;
    x.val=y.val2;
    y.val2=temp;

}

int main()
{
    c1 oc1;
    c2 oc2;

    oc1.setData(18);
    oc2.setData(7);
    exchange(oc1,oc2);

    cout<<"The value of c1 after exchange is ";
    oc1.display();
    cout<<"The value of c2 after exchange is ";
    oc2.display();
    
    return 0;
}