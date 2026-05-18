#include<iostream>
#include<bits/stdc++.h>
using namespace std;


// struct employee
// {
//     int eID;
//     char favChar;
//     float salary;
// };

typedef struct employee
{
    int eID; //4
    char favChar; //1
    float salary; //4
}  ep;//9

union money
{
    int rice; //4
    char car; //1
    float pounds; //4
}; //4or1 one at a time

int main()
{
    enum meal{breakfast,lunch,dinner};
    meal m=breakfast;
    cout<<m<<endl;
    cout<<breakfast<<endl;
    cout<<lunch<<endl;
    cout<<dinner<<endl;
    ep sam;
    ep ram;
    ep bam;
    union money m1;
    m1.rice=34;
    m1.car='c';
    //m1.rice=18;
    cout<<m1.car<<endl;
    sam.eID=1;
    sam.favChar='S';
    sam.salary=100000;
    cout<<"The value is "<<sam.salary<<endl;
    cout<<"The value is "<<sam.eID<<endl;
    cout<<"The value is "<<sam.favChar<<endl;
    return 0;
}