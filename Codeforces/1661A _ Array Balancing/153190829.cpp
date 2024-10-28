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
 
const int m=1e9+7;
 
 
 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n+1];
        int b[n+1];
        lp(i,n)
        cin>>a[i];
        lp(i,n)
        cin>>b[i];
        ll s=0;
        ll dp[n+1][2];
        dp[1][0]=abs(a[1]-a[0])+abs((b[1]-b[0]));
        dp[1][1]=abs(b[1]-a[0])+abs((a[1]-b[0]));
        lpi(i,2,n)
            {
               dp[i][0]=min(dp[i-1][0]+ abs(a[i]-a[i-1])+abs((b[i]-b[i-1])),dp[i-1][1]+ abs(a[i]-b[i-1])+abs((b[i]-a[i-1])));
               dp[i][1]=min(dp[i-1][0]+ abs(b[i]-a[i-1])+abs((a[i]-b[i-1])),dp[i-1][1]+ abs(b[i]-b[i-1])+abs((a[i]-a[i-1])));
            }
        cout<<min(dp[n-1][0],dp[n-1][1])<<endl;
 
    }
}