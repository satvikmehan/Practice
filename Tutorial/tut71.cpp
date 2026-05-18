#include<iostream>
#include<bits/stdc++.h>
using namespace std;

template<class T>
void display(vector<T> &v)
{
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl; 
}

int main()
{
    vector<int> vec1;
    vector<char> vec2(4);
    vec2.push_back('S');
    vector<char> vec3(vec2);
    vector<char> vec4(6,'S');
    
    display(vec2);
    display(vec3);
    display(vec4);


    // vector<int> vec1;
    // int element;
    // int size;
    // cin>>size;
    // for(int i=0;i<size;i++)
    // {
    //     cin>>element;
    //     vec1.push_back(element);
    // }
    // vec1.pop_back();
    // display(vec1);
    // vector<int> :: iterator iter = vec1.begin();
    // vec1.insert(iter,18);
    // display(vec1);
    // vec1.insert(iter+1,18);
    // display(vec1);
    // vec1.insert(iter+1,5,18);
    // display(vec1);
    
    return 0;
}