#include<iostream>
#include<fstream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    string st = "Sam";
    string st2;
    string st3;

    // ofstream out("sample60.txt");
    // out<<st;

    ifstream in("sample60b.txt");
    //in>>st2;
    getline(in,st2);
    getline(in,st3);
    cout<<st2<<endl<<st3;
    return 0;
}