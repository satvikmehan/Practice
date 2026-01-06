#include<iostream>
// #include"this.h"
using namespace std;

int main()
{
    int a=4,b=6;
    cout<<"This is hello world program"<<endl<<"Operators in C++\n";
    cout<<"The value of a+b is: "<<a+b<<endl;
    cout<<"The value of a-b is: "<<a-b<<endl;
    cout<<"The value of a*b is: "<<a*b<<endl;
    cout<<"The value of a/b is: "<<a/b<<endl;
    cout<<"The value of a%b is: "<<a%b<<endl;
    cout<<"The value of a++ is: "<<a++<<endl;
    cout<<"The value of a-- is: "<<a--<<endl;
    cout<<"The value of ++a is: "<<++a<<endl;
    cout<<"The value of --a is: "<<--a<<endl;

    int x=10,y=15;
    char po='^';
    bool value=true;

    cout<<"The value of a==b is: "<<(a==b)<<endl;
    cout<<"The value of a!=b is: "<<(a!=b)<<endl;
    cout<<"The value of a>b is: "<<(a>b)<<endl;
    cout<<"The value of a<b is: "<<(a<b)<<endl;
    cout<<"The value of a>=b is: "<<(a>=b)<<endl;
    cout<<"The value of a<=b is: "<<(a<=b)<<endl;

    cout<<"The value of a==b && a<b is: "<<((a==b) && (a<b))<<endl;
    cout<<"The value of a==b || a<b is: "<<((a==b) || (a<b))<<endl;
    cout<<"The value of !(a<b) is: "<<!(a<b)<<endl;

    return 0;
}