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
    int n;
    cin>>n;
    int b[n-1];
    for(int i=0;i<n-1;i++)
    {
        cin>>b[i];
    }

    int a[n];

    if(b[0]>=b[1])
    {
        a[0]=b[0];
    }
    else
    {
        a[0]=b[0];
        a[1]=b[0]-1;
        a[2]=b[1];
    }

    for(int i=1;i<n-2;i++)
    {
        if(b[i]>=a[i-1]&&b[i]>=a[i+1])
        {
            a[i]=b[i];
        }
        else
        {
            a[i]=b[i]-1;
        }
    }

    if(b[n-1]>=a[n-2])
    {
        a[n-1]=b[n-1];
    }
    else
    {
        a[n-1]=
    }


    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
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