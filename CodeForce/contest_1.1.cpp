#include <bits/stdc++.h>
using namespace std;

#define ff first
#define ss second
// #define int long long
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

int greaterthannum(int a, vector<int> &b)
{
    int l = 0;
    int r = b.size() - 1;
    int ans = -1;
    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (b[mid] >= a)
        {
            ans = mid;
            r = mid - 1;
        }
        else
            l = mid + 1;
    }
    return ans;
}
void solve()
{
    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(m);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < m; i++)
        cin >> b[i];

    sort(b.begin(), b.end());
    vi ans(n);
    ans[0] = min(a[0], b[0] - a[0]);

    for (int i = 1; i < n; i++)
    {
        int temp = ans[i - 1] + a[i];
        int idx = greaterthannum(temp, b);
        if (idx == -1)
        {
            ans[i] = a[i];
        }
        else
        {
            // cout<<i<<" "<<b[idx]<<endl;
            int mina = min(a[i], b[idx] - a[i]);
            int maxa = max(a[i], b[idx] - a[i]);
            if (mina >= ans[i - 1])
            {
                ans[i] = mina;
            }
            else
            {
                ans[i] = maxa;
            }
        }
    }

    // for (auto x : ans)
        // cout << x << " ";
    for (int i = 1; i < n; i++)
    {
        if (ans[i] < ans[i - 1])
        {
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
}
int32_t main()
{
    w(t)
    {
        solve();
    }
    return 0;
}


