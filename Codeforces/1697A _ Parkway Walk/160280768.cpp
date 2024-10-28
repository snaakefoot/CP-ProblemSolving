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
    int t;
    cin>>t;
    while(t--)
    {
        int n,x,e;
        cin>>n>>e;
        ll s=0;
        lp(i,n)
        {
            cin>>x;
            s+=x;
        }
        if (e>=s)
            cout<<0<<endl;
        else
            cout<<s-e<<endl;
    }
 
 
 
 
 
 
 
 
}
 
 
 
 
 