#include<iostream>
#include<bits/stdc++.h>
using namespace std;

template<class T>
class sam
{
    public:
        T data;
        sam(T a)
        {
            data=a;
        }
        void display();
};

template<class T>
void sam<T> :: display()
        {
            cout<<data<<endl;
        }

void func(int a)
{
    cout<<"I am first func() "<<a<<endl;
}

template<class T>
void func(T a)
{
    cout<<"I am templatised func() "<<a<<endl;
}

template<class T>
void func1(T a)
{
    cout<<"I am templatised func() "<<a<<endl;
}

int main()
{
    // sam<float> s(5.5);
    // cout<<s.data<<endl;
    // s.display();

    func(4);
    func(4.5);
    func1(4);
    return 0;
}