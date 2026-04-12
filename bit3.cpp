#include <bits\stdc++.h>
using namespace std;

int main()
{
    string str;
    cin >> str;
    int n = str.length();
    int max = INT_MIN;
    char ans = ' ';
    for (int i = 0; i < n; i++)
    {
        int freq = 0;
        char word = str[i];
        for (int j = 0; j < n; j++)
        {
            if (str[j] == word)
            {
                freq++;
            }
            if (freq > max)
            {
                max = freq;
                ans = word;
            }
        }
    }
    cout << ans;
    return 0;
}
