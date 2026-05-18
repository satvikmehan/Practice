#include<bits/stdc++.h>
using namespace std;

#define ff              first
#define ss              second
#define int             long long
#define pb              push_back
#define mp              make_pair
#define pii             pair<int,int>
#define vi              vector<int>
#define mii             map<int,int>
#define pqb             priority_queue<int>
#define pqs             priority_queue<int,vi,greater<int> >
#define setbits(x)      __builtin_popcountll(x)
#define zrobits(x)      __builtin_ctzll(x)
#define mod             1000000007
#define inf             1e18
#define ps(x,y)         fixed<<setprecision(y)<<x
#define mk(arr,n,type)  type *arr=new type[n];
#define w(t)            int t; cin>>t; while(t--)
void solve() {
    int size;
    cin>>size;
    int num;
    cin>>num;
    char nums=num+ '0';

    string digits;
    cin>>digits;

    int pos=size;
    for(int i=0;i<size;i++)
    {
        if(digits[i]<nums)
        {
            pos=i;
            break;
        }
    }

    for(int i=0;i<pos;i++)
    {
        cout<<digits[i];
    }
    cout<<nums;
    for(int i=pos;i<size;i++)
    {
        cout<<digits[i];
    }
    cout<<endl;
}
int32_t main()
{
    w(t)
    {
        solve();
    }
return 0;
}