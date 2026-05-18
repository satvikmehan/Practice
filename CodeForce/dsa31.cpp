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
    cin>>n>>q;
    vi arr(n+1);
    vi pre(n+1);
    int sum=0;
    for(int i=1;i<=n;i++)
    {
        cin>>arr[i];
        sum+=arr[i];
        pre[i]=sum;

    }
    pre[0]=0;
    while(q>0)
    {
        int a,b,num;
        cin>>a>>b>>num;
        int sub=pre[b]-pre[a-1];
        int add=(b-a+1)*num;
        int ans=sum+add-sub;
        if(ans%2!=0)
        {
            cout<<"Yes"<<endl;;
        }
        else
        {
            cout<<"No"<<endl;
        }
        q--;
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