#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a = 4;
    int* ptr = &a;
    //ptr=999;
    cout<<"The value of a is "<<*(ptr)<<" and "<<ptr<<endl;

    int *p = new int(40);
    float *f = new float(40.45);
    cout<<"The value at address p is "<<(p)<<" and "<<*(f)<<endl;

    int *arr= new int[3];
    arr[0]=10;
    *(arr+1)=20;
    arr[2]=30;

    //delete[] arr;

    cout<<"The value of arr[0] is "<<arr[0]<<endl;
    cout<<"The value of arr[1] is "<<arr[1]<<endl;
    cout<<"The value of arr[2] is "<<arr[2]<<endl;


    return 0;
}