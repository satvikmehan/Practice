#include<iostream>
#include<bits/stdc++.h>
using namespace std;

template <class t>
class vec
{
    public:
        t *arr;
        int size;
        vec(int m)
        {
            size=m;
            arr = new t[size];
        }
        t dotProduct(vec &v)
        {
            t d=0;
            for(int i=0;i<size;i++)
            {
                d+=this->arr[i]*v.arr[i];
            }
            return d;
        }
};

int main()
{
    // vec v1(3);
    // v1.arr[0]=1;
    // v1.arr[1]=5;
    // v1.arr[2]=10;
    
    // vec v2(3);
    // v2.arr[0]=2;
    // v2.arr[1]=6;
    // v2.arr[2]=12;
    
    vec<float> v1(3);
    v1.arr[0]=1.5;
    v1.arr[1]=5.2;
    v1.arr[2]=10.0;
    
    vec<float> v2(3);
    v2.arr[0]=0.2;
    v2.arr[1]=6.5;
    v2.arr[2]=12.2;

    float a = v1.dotProduct(v2);
    cout<<a<<endl;
    
    return 0;
}