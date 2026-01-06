#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int add(int a,int b)
{
    cout<<"With 2 ";
    return a+b;
}

int add(int a,int b,int c)
{
    cout<<"With 3 ";
    return a+b+c;
}

int volume(double r,int h)
{
    return (3.14*r*r*h);
}

int volume(int a)
{
    return a*a*a;
}

int volume(int l,int b,int h)
{
    return l*b*h;
}

int main()
{
    int a=5,b=6,c=10;
    cout<<"The sum of "<<a<<" and "<<b<<" is "<<add(a,b)<<endl;
    cout<<"The sum of "<<a<<" , "<<b<<" and "<<c<<" is "<<add(a,b,c)<<endl;
    cout<<"The volume of cylinder is "<<volume(7,14)<<endl;
    cout<<"The volume of cube is "<<volume(9)<<endl;
    cout<<"The volume of rectangle is "<<volume(1,2,3)<<endl;

    return 0;
}