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
    ll n,t,p;
    cin>>t;
    while(t--)
    {
        ll n,s=0,p;cin>>n;
        ll a[n];
          ll pref1[n/2];
            ll pref2[n/2];
        lp(i,n)
        cin>>a[i];
        if (n%2==1)
        {
            lpi(i,1,n-1)
            if (i%2==1)
                s+=max(max(a[i-1],a[i+1])-a[i]+1,(ll)0);
            cout<<s<<endl;
        }
        else
        {
 
 
            lpi(i,1,n-1)
            {
                if (i%2==1 && i>1)
                pref1[i/2]=max(max(a[i-1],a[i+1])+1-a[i] ,(ll)0)+pref1[i/2-1];
                else
                    if(i==1)
                    pref1[i/2]=max(max(a[i-1],a[i+1])-a[i]+1,(ll)0);
 
            }
            lpi(i,2,n-1)
            {
                if (i%2==0 && i>2)
                pref2[i/2-1]=max(max(a[i-1],a[i+1])+1-a[i] ,(ll)0)+pref2[i/2-2];
                else
                    if(i==2)
                    pref2[i/2-1]=max(max(a[i-1],a[i+1])-a[i]+1,(ll)0);
            }
            ll mn=pref2[n/2-2];
            lp(i,n/2-1)
            {
 
                mn=min(pref1[i]+pref2[n/2-2]-pref2[i],mn);
            }
            cout<<mn<<endl;
        }
 
 
    }
}