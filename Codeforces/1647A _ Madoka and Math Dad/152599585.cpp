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
    string s;
    int t[2]={'1','2'};
    cin>>n;
    if (n==1)
        cout<<1<<endl;
    else
        {
            int j=1;
               if (n%3==1)
                j=0;
                while(n>0)
                {
               s+=t[j];
               n-=j+1;
               j++;
               j%=2;}
 
 
 
            cout<<s<<endl;
        }
    }
    }