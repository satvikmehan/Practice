#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<pair<int, int>> task(n);

    for (int i = 0; i < n; i++)
    {
        cin >> task[i].first;
        cin >> task[i].second;
    }

    for(int pos=0;pos<n;pos++)
    {
        int min = pos;

        for (int i = pos+1; i < n; i++)
        {
            if (task[i].first < task[min].first || 
                (task[i].first == task[min].first && task[i].second < task[min].second))
            {
                min=i;
            }
        }
        swap(task[pos],task[min]);
    }

    for (int i = 0; i < n; i++)
    {
        cout << task[i].first << " " << task[i].second << ", ";
    }

    return 0;
}