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
    int u;cin>>u;
    while(u--)
    {
        ll n;
        cin>>n;
        ll s=(n*(n+1))/2;
        char a[n];
        ll last=1;
        cin>>a[0];
        for(ll i=1;i<n;i++)
        {
            cin>>a[i];
 
        }
        last=n-1;
        for(ll i=n-2;i>=0;i--)
        {
            if (a[i]==a[i+1])
               {
 
                   s-=i+1;
 
 
               }
        }
        cout<<s<<endl;
}
}
 
 
 
 