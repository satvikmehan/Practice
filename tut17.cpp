#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//Only Faster
inline int product(int a,int b)
{
    int c=a*b;
    return c;
}

//inline not with static
// int product(int a,int b)
// {
//     static int c=0;//only run first time not again and value will retain
//     c=c+1;
//     return a*b+c;
// }

float moneyReceived(int currentMoney,float factor=1.04)//default arguments at the end
{
    return currentMoney*factor;
}


int main()
{
    int const money=1000;
    //cout<<"Enter amount";
    //cin>>money;//no input in const
    // int a,b;
    // cout<<"Enter the values of a and b";
    // cin>>a>>b;
    // cout<<"The sum of a and b:"<<product(a,b)<<endl;
    // cout<<"The sum of a and b:"<<product(a,b)<<endl;
    // cout<<"The sum of a and b:"<<product(a,b)<<endl;
    // cout<<"The sum of a and b:"<<product(a,b)<<endl;
    // cout<<"The sum of a and b:"<<product(a,b)<<endl;
    // cout<<"The sum of a and b:"<<product(a,b)<<endl;
    // cout<<"The sum of a and b:"<<product(a,b)<<endl;
    // cout<<"The sum of a and b:"<<product(a,b)<<endl;
    // cout<<"The sum of a and b:"<<product(a,b)<<endl;
    // cout<<"The sum of a and b:"<<product(a,b)<<endl;
    // cout<<"The sum of a and b:"<<product(a,b)<<endl;
    // cout<<"The sum of a and b:"<<product(a,b)<<endl;
    // cout<<"The sum of a and b:"<<product(a,b)<<endl;
    // cout<<"The sum of a and b:"<<product(a,b)<<endl;
    // cout<<"The sum of a and b:"<<product(a,b)<<endl;
    // cout<<"The sum of a and b:"<<product(a,b)<<endl;
    // cout<<"The sum of a and b:"<<product(a,b)<<endl;
    // cout<<"The sum of a and b:"<<product(a,b)<<endl;
    // cout<<"The sum of a and b:"<<product(a,b)<<endl;

    cout<<"If you have "<<money<<" Rupees in your bank account, you will receive "<<moneyReceived(money)<<" rupees after 1 year"<<endl;
    cout<<"For VIP:If you have "<<money<<" Rupees in your bank account, you will receive "<<moneyReceived(money,1.5)<<" rupees after 1 year";

    return 0;
}