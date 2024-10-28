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
 
 
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,t,p;
    cin>>t;
    while(t--)
    {
        int n;cin>>n;
        int a[3];
        lp(i,3)
        cin>>a[i];
 
        if (a[n-1]!=0 && a[a[n-1]-1]!=0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
 
 
 
    }
}