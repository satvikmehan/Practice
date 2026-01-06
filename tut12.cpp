#include<iostream>
using namespace std;

int main()
{
    int a=3;
    int *b;
    b=&a;
    //b==>pointer
    //&-->(Address of) operator
    //*==>value at that pointer(Dereference operator)
    cout<<"Address of a"<<endl<<&a<<endl;
    cout<<b<<endl;
    cout<<"The value at address b is"<<endl<<*b<<endl;
    cout<<*(&a)<<endl;


    //poniter to pointer
    int** c;
    c=&b;
    cout<<"Address of b"<<endl<<&b<<endl;
    cout<<c<<endl;
    cout<<"The value at address c is"<<endl<<*c<<endl;
    cout<<*(&b)<<endl;
    cout<<"The value at address b is"<<endl<<**c<<endl;
    cout<<**(&b)<<endl;

    return 0;
}