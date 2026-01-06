#include<iostream>
#include<bits/stdc++.h>
using namespace std;

template<class T1,class T2>
class myClass
{
    public:
        T1 data1;
        T2 data2;
        myClass(T1 a,T2 b)
        {
            data1=a;
            data2=b;
        }
        void display()
        {
            cout<<this->data1<<endl<<this->data2<<endl;
        }
};

int main()
{
    myClass<int,char> obj(18,'7');
    obj.display();
    myClass<char,float> obj1('A',18.7);
    obj1.display();

    return 0;
}