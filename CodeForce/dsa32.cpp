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
void solve() 
{
    int a,b,n,s;
    cin>>a>>b>>n>>s;
    int x=s/n;
    if(x>=a)
    {
        int rem=s-n*a;
        if(rem<=b)
        {
            cout<<"Yes";
        }
        else
        {
            cout<<"No";
        }
    }
    else
    {
        int rem=s%n;
        if(rem<=b)
        {
            cout<<"Yes";
        }
        else
        {
            cout<<"No";
        }
    }

}
int32_t main()
{
    w(t)
    {
        solve();
        cout<<endl;
    }
return 0;
}