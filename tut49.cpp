#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Test
{
    //int b;
    int a;
    int b;
    
    public:
        Test(int i,int j):a(i)
        {
            b=j;
            cout<<"Constructor Executed"<<endl;
            cout<<"Value of a is "<<a<<endl;
            cout<<"Value of b is "<<b<<endl;

        }
};

int main()
{
    Test sam(18,7);
    return 0;
}