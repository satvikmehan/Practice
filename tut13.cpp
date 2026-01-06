#include<iostream>
using namespace std;

int main()
{
    int marks[]={5,10,15,20};
    int Mmarks[4];
    Mmarks[0]=1;
    Mmarks[1]=2;
    Mmarks[2]=4;
    Mmarks[3]=8;
    // cout<<marks[0]<<endl;
    // cout<<marks[1]<<endl;
    // cout<<marks[2]<<endl;
    // cout<<marks[3]<<endl;
    cout<<"These are Math Marks"<<endl;
    cout<<Mmarks[0]<<endl;
    cout<<Mmarks[1]<<endl;
    Mmarks[2]=18;
    cout<<Mmarks[2]<<endl;
    cout<<Mmarks[3]<<endl;

    cout<<"For Loop"<<endl;
    for (int i = 0; i < 4; i++)
    {
        cout<<marks[i]<<endl;
    }

    cout<<"While Loop"<<endl;
    int a=0;
    while(a<4)
    {
        cout<<marks[a]<<endl;
        a++;
    }

    cout<<"Do While Loop"<<endl;
    int b=0;
    do
    {
       cout<<marks[b]<<endl;
       b++;
    } 
    while (b<4);

    int *p=marks;
    cout<<*++p<<endl;
    cout<<*p++<<endl;
    cout<<"The value of marks zero is "<<*p<<endl;
    cout<<"The value of marks one is "<<*(p+1)<<endl;
    cout<<"The value of marks two is "<<*(p+2)<<endl;//random
    cout<<"The value of marks three is "<<*(p+3)<<endl;//random

    return 0;
}