#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    ofstream hout("sample60.txt");

    cout<<"Enter your name";
    string name;
    cin>>name;

    hout<<"My name is " + name;
    hout.close();

    ifstream hin("sample60.txt");
    string content;
    getline(hin,content);
    cout<<"The content of this file is - "<<content;
    hin.close();


    return 0;
}