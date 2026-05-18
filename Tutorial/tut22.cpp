#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class binary
    {
        private:
        //By default private
            string s;
            void chk_bin();//accessed by public functions or methods
        public:
            void read(void);
            void ones();
            void display();
    };

void binary::read()
{
    cout<<"Enter a binary number:";
    cin>>s;
    display();
}

void binary::chk_bin()
{
    for (int i = 0; i < s.length(); i++)
    {
        if(s.at(i)!='0' && s.at(i)!='1')
        {
            cout<<"Incorrect binary format"<<endl;
            exit(0);
        }
    }
    
}

void binary::ones()
{
    chk_bin();
    for(int i=0;i<s.length();i++)
    {
        if(s.at(i)=='0')
        {
            s.at(i)='1';
        }
        else if(s.at(i)=='1')
        {
            s.at(i)='0';
        }
    }
    display();
}

void binary::display()
{
    for(int i=0;i<s.length();i++)
    {
        cout<<s.at(i);
    }
    cout<<endl;
}

int main()
{
    binary b;
    b.read();
    b.ones();
    //b.chk_bin(); will not run because of private
    return 0;
}