#include<iostream>
using namespace std;

int main()
{
    // cout<<"This is tutotrial 9";
    int age;
    cout<<"Tell me your age:";
    cin>>age;
    // if(age>18 && age>0)
    // {
    //     cout<<"Welcome";
    // }
    // else if(age==18)
    // {
    //     cout<<"Hshh Welcome";
    // }
    // else if(age<=0)
    // {
    //     cout<<"Enter valid age";
    // }
    // else
    // {
    //     cout<<"Not allowed";
    // }


    switch (age)
    {
    case 18:
    cout<<"You are 18";
    break;
    case 21:
    cout<<"You are 21";
    break;
    case5:
    cout<<"you are 5";
    break;
    default:
    cout<<"No valid age";
    }
    cout<<"\nSwitch case complete";
    return 0;
}
