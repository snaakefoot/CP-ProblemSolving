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
set<int> s;
 
 
int main()
{
    int n,t;
    cin>>n>>t;
    int a[n];
    lp(i,n-1)
    cin>>a[i];
    int j=0;
    while(j<t-1)
        j+=a[j];
    if (j==t-1)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
 
}