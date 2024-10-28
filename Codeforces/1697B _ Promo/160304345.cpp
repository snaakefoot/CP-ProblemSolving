#include <bits/stdc++.h>
using namespace std;
#define all(v)   ((v).begin()), ((v).end())
#define sz(v)   ((int)((v).size()))
#define clr(v, d)  memset(v, d, sizeof(v))
#define rep(i, v)  for(int i=0;i<sz(v);++i)
#define lp(i, n)  for(ll i=0;i<(ll)(n);++i)
#define lpi(i, j, n) for(int i=(j);i<(int)(n);++i)
#define lpd(i, j, n) for(int i=(j);i>=(int)(n);--i)
typedef long long ll;
int m=1e9;
 
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
 
        ll n,x,q,y;
        cin>>n>>q;
        ll a[n];
        ll pre[n];
 
        lp(i,n)
        {
            cin>>a[i];
 
 
        }
        sort(a,a+n,greater<ll>());
        pre [0]=a[0];
        lpi(i,1,n)
        pre[i]=a[i]+pre[i-1];
        while(q--)
        {
            cin>>x>>y;
            if (x!=y)
            cout<<pre[x-1]-pre[x-y-1]<<endl;
            else
                cout<<pre[x-1]<<endl;
 
        }
 
 
 
 
 
 
 
 
 
 
}
 
 
 
 
 