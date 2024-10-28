#include <bits/stdc++.h>
using namespace std;
#define all(v)   ((v).begin()), ((v).end())
#define sz(v)   ((int)((v).size()))
#define clr(v, d)  memset(v, d, sizeof(v))
#define rep(i, v)  for(int i=0;i<sz(v);++i)
#define lp(i, n)  for(int i=0;i<(int)(n);++i)
#define lpi(i, j, n) for(int i=(j);i<(int)(n);++i)
#define lpd(i, j, n) for(int i=(j);i>=(int)(n);--i)
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
 
    int t ; cin>>t;
    while(t--)
    {
        int n ;
        cin>>n;
        int a[n];
        int b[n];
        lp(i,n)
        cin>>a[i];
        lp(i,n)
        cin>>b[i];
        int mx=0;
        bool test =1;
        lp(i,n)
        {
        mx=max(mx,(a[i]-b[i]));
        if (a[i]-b[i]<0)
            test=0;
        }
        lp(i,n)
 
            if (a[i]-b[i]<mx && b[i]!=0)
                test=0;
 
        if (test)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
 
 
 
    }
 
 
}