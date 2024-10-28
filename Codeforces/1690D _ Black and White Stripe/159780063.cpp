#include <bits/stdc++.h>
using namespace std;
#define all(v)   ((v).begin()), ((v).end())
#define sz(v)   ((int)((v).size()))
#define clr(v, d)  memset(v, d, sizeof(v))
#define rep(i, v)  for(int i=0;i<sz(v);++i)
#define lp(i, n)  for(int i=0;i<(int)(n);++i)
#define lpi(i, j, n) for(int i=(j);i<(int)(n);++i)
#define lpd(i, j, n) for(int i=(j);i>=(int)(n);--i)
int m=1e9;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
 
    int t ; cin>>t;
    while(t--)
    {
 
        int n,k,mn=m;
        cin>>n>>k;
        char ch[n];
        int w[n];
        lp(i,n)
        {cin>>ch[i];
        w[i]=ch[i]=='W';
        if (i!=0)
            w[i]+=w[i-1];}
        lp(i,n-k+1)
        {
            if (i!=0)
            mn=min(w[i+k-1]-w[i-1],mn);
            else
                 mn=min(w[i+k-1],mn);
        }
        cout<<mn<<endl;
 
 
 
 
 
 
    }
 
 
}