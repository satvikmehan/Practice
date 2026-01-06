#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class shop
{
    int itemId[100];
    int itemPrice[100];
    int counter;
    public:
        void initCounter()
        {
            counter=0;
        }
        void setPrice();
        void displayPrice();
};

void shop::setPrice()
{
    cout<<"Enter the ID of your item number "<<counter+1<<endl;
    cin>>itemId[counter];
    cout<<"Enter the price of the item"<<endl;
    cin>>itemPrice[counter];
    counter++;
}

void shop::displayPrice()
{
    for (int i = 0; i <= counter; i++)
    {
        cout<<"The price of item with ID "<<itemId[i]<<" is "<<itemPrice[i]<<endl;
    }
}

int main()
{   
    shop dukaan;
    dukaan.initCounter();
    dukaan.setPrice();
    dukaan.setPrice();
    dukaan.setPrice();
    dukaan.setPrice();
    dukaan.displayPrice();

    return 0;
}