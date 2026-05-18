#include<iostream>
#include<bits/stdc++.h>
using namespace std;


// int sum(int a,int b)
// {
//     int c=a+b;
//     return c;
// }

// int sum(int a,int b);
int sum(int,int);
void g();

int main()
{
    int num1,num2;
    cout<<"Enter first number"<<endl;
    cin>>num1;
    cout<<"Enter second number"<<endl;
    cin>>num2;
    cout<<"The sum is:"<<sum(num1,num2)<<endl;   
    g();
    return 0;
}

int sum(int a,int b)
{
    int c=a+b;
    return c;
}

void g()
{
    cout<<"Good Morning";
}