#include<iostream>
using namespace std;
int glo=6;
void sum()
{
    int a;
    cout<<glo<<endl;
}
int main()
{
    int glo=9;
    glo=10;
    // int a=4;
    // int b=5;
    int a=4,b=5;
    float pi=3.14;
    char c='c';
    bool is_true=false;
    sum();
    cout<<glo<<endl; 
    cout<<is_true<<endl;
    cout<<"This is tutorial 4.\nHere the value of a is "<<a<<". The value of b is "<<b;
    cout<<"\nThe value of pi is "<<pi;    
    cout<<"\nThe value of c is "<<c<<endl;  
    return 0;
}