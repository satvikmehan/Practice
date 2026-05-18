#include<iostream>
#include<bits/stdc++.h>
using namespace std;


// int factorial(int n)
// {
//     if(n<=1)
//     {
//         return 1;
//     }
//     else
//     return n*factorial(n-1);
// }

int fib(int n)
{
    if(n<=1)
    {
        return n; 
    }
    else
    return fib(n-2)+fib(n-1); 
}

// int fibprint(int n,int prev1,int prev2)
// {
//     if(n<3)
//     {
//         return 1;
//     }
//     else
//     {
//         int curr=prev1+prev2;
//         cout<<","<<curr;

//         return fibprint(n-1,curr,prev1);
//     }
// }

int main()
{
    int a;
    cout<<"Enter a number :";
    cin>>a;
    // int n;
    // cout<<"Enter element of the series";
    // cin>>n;
    //cout<<"The factorial of "<<a<<" is:"<<factorial(a)<<endl;
    cout<<"The term in fibonacci series at position "<<a<<" is:"<<fib(a)<<endl;
    // cout<<"[0,1";
    // fibprint(n,1,0);
    // cout<<"]";
    return 0;
}