#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    for (int i = 1; i <= 20; i++)
    {
        if (i % 2 != 0)
        {
            cout << i;
            if (i < 19)
            {
                cout << ",";
            }
        }
    }
    return 0;
}