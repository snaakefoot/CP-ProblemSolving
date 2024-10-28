#include <bits/stdc++.h>
using namespace std;
#define all(v)   ((v).begin()), ((v).end())
#define sz(v)   ((int)((v).size()))
#define clr(v, d)  memset(v, d, sizeof(v))
#define rep(i, v)  for(int i=0;i<sz(v);++i)
#define lp(i, n)  for(int i=0;i<(int)(n);++i)
#define lpi(i, j, n) for(int i=(j);i<(int)(n);++i)
#define lpd(i, j, n) for(int i=(j);i>=(int)(n);--i)
 
typedef long long ll;
 
int n;
 
ll M=1e18+1;
ll searsh(ll x)
{
 
 
    set <ll> s;
    ll p=x,l=0;
    while(p>0)
    {
        if (p%10!=0 && p%10!=1)
        s.insert(p%10);
        p/=10;
        l++;
 
    }
 
    if (l>=n)
        return 0;
 
    ll mn=M;
    if(s.size()==0 ) return M;
 
 
 
    for (set<ll> ::iterator it =s.begin();it!=s.end();it++)
    {
        mn=min(mn,searsh(x*(*it)));
    }
 
    return 1+mn;
}
 
 
 
 
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        int s=0;
        lp(i,n)
        {
            cin>>a[i];
            if (a[i]%2==0)
                s++;
        }
        cout<<min(s,n-s)<<endl;
    }
 
}