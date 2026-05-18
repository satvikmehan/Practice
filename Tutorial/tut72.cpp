#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void display(list<int> &l)
{
    list<int> :: iterator iter;
    for(iter=l.begin();iter!=l.end();iter++)
    {
        cout<<*iter<<" ";
    }
    cout<<endl;
}

int main()
{
    list<int> list1;
    list1.push_back(5);
    list1.push_back(7);
    list1.push_back(1);
    list1.push_back(9);
    list1.push_back(12);
    display(list1);
    list1.pop_back();
    display(list1);
    list1.pop_front();
    display(list1);
    list1.remove(1);
    display(list1);
    list1.push_back(9);
    display(list1);
    list1.remove(9);
    display(list1);
    
    

    list<int> list2(7);
    list<int> :: iterator itr;
    itr=list2.begin();
    *itr=10;
    itr++;
    *itr=18;
    itr++;
    *itr=33;
    itr++;
    *itr=45;
    itr++;
    display(list2);
    list2.pop_back();
    list2.pop_back();
    list2.pop_back();
    list2.sort();
    display(list2);
    list2.push_back(1);
    display(list2);

    list1.merge(list2);
    display(list1);

    list1.reverse();
    display(list1);



    return 0;
}