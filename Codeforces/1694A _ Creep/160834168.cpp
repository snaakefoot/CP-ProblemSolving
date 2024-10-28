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
        int a,b,s=0;
        int t[2]={0,1};
        cin>>a>>b;
        if (b>a)
            s=1;
        while(a>0 && b>0)
            {cout<<t[s]<<t[(s+1)%2];
            a--;
            b--;}
 
        while(a--)
            cout<<0;
        while(b--)
            cout<<1;
        cout<<endl;
}
}
 
 
 
 