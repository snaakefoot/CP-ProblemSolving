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
 
 
 
ll dp[5000001];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,t;
    cin>>t;
    while(t--)
    {
        int l,r,a;
        cin>>l>>r>>a;
        int res=a-1;
        if (res>=r )
            cout<<r<<endl;
        else
        {
            if (r%a==res || a*(-1+r/a)+res<l)
                cout<<r/a+r%a<<endl;
            else
            {
 
                    cout<<(-1+r/a)+res<<endl;
 
            }
        }
 
 
 
    }
}