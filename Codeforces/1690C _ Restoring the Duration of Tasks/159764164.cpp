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
 
        int n;
        cin>>n;
        int ar[n];
        int en[n];
        lp(i,n)
        cin>>ar[i];
        lp(i,n)
        cin>>en[i];
        int temp=ar[0];
        lp(i,n)
        {
            temp=max(temp,ar[i]);
            cout<<en[i]-temp<<' ';
            temp=en[i];
        }
        cout<<endl;
 
 
 
 
 
    }
 
 
}