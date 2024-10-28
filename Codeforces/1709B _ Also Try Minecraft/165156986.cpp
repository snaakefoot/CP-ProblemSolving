#include <bits/stdc++.h>
 
using namespace std;
#define all(v)   ((v).begin()), ((v).end())
#define sz(v)   ((int)((v).size()))
#define clr(v, d)  memset(v, d, sizeof(v))
#define rep(i, v)  for(int i=0;i<sz(v);++i)
#define lp(i, n)  for(ll i=0;i<(ll)(n);++i)
#define lpi(i, j, n) for(ll i=(j);i<(ll)(n);++i)
#define lpd(i, j, n) for(int i=(j);i>=(int)(n);--i)
 
typedef long long ll;
 
 
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
 
        ll n,m,s,t;
        cin>>n>>m;
        ll pref[n];
        ll pref1[n];
        ll a[n];
        lp(i,n)
        {
 
            cin>>a[i];
            if (i==0)
                pref[i]=0;
            else
                pref[i]=max((ll)0,a[i-1]-a[i])+pref[i-1];
        }
        for( ll i =n-1;i>=0;i--)
        {
            if (i==n-1)
                pref1[i]=0;
            else
                pref1[i]=max((ll)0,a[i+1]-a[i])+pref1[i+1];
        }
        lp(i,m)
        {
            cin>>s>>t;
            if (s<=t)
            cout<<pref[t-1]-pref[s-1]<<endl;
            else
                cout<<pref1[t-1]-pref1[s-1]<<endl;
        }
 
 
 
 
}