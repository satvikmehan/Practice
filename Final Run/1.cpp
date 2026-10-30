#include <bits/stdc++.h>
using namespace std;

#define ff first
#define ss second
#define int             long long
#define pb push_back
#define mp make_pair
#define pii pair<int, int>
#define vi vector<int>
#define mii map<int, int>
#define pqb priority_queue<int>
#define pqs priority_queue<int, vi, greater<int>>
#define setbits(x) __builtin_popcountll(x)
#define zrobits(x) __builtin_ctzll(x)
#define mod 1000000007
#define inf 1e18
#define ps(x, y) fixed << setprecision(y) << x
#define mk(arr, n, type) type *arr = new type[n];
#define w(t)  \
    int t;    \
    cin >> t; \
    while (t--)
void solve()
{
    int n;
    cin>>n;
    int digit;
    cin>>digit;
    string num;
    cin>>num;
    string ans;
    bool inserted=false;
    for(int i=0;i<n;i++)
    {
        if(digit<=(num[i]-'0') || inserted==true)
        {
            ans.push_back(num[i]);
        }
        else
        {
            ans.push_back(digit+'0');
            ans.push_back(num[i]);
            inserted=true;
        }
    }
    if(inserted==false)
    {
        ans.push_back(digit+'0');
    }
    cout<<ans<<endl;
}
int32_t main()
{
    w(t)
    {
        solve();
    }
    return 0;
}