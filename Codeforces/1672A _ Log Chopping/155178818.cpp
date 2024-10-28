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
int t;
cin>>t;
while(t--)
{
    ll s=0,n;
    cin>>n;
    int a[n];
    string t[2]={"maomao90","errorgorn"};
    lp(i,n)
    {cin>>a[i];
    s+=a[i]-1;}
    cout<<t[s%2]<<endl;
 
}
 
    }