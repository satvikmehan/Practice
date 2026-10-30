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
    int n,q;
    cin>>n;
    cin>>q;
    int a[n+1];
    a[0]=0;
    int pre[n+1];
    int sum=0;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        sum+=a[i];
        pre[i]=sum;
    }
    pre[0]=0;
    for(int i=0;i<q;i++)
    {
        int l,r,k;
        cin>>l>>r>>k;
        int add=sum-(pre[r]-pre[l-1]);
        add+=(r-l+1)*k;

        if(add%2==0)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"Yes"<<endl;
        }
    }
    
}
int32_t main()
{
    w(t)
    {
        solve();
    }
return 0;
}