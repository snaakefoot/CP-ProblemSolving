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
 
int t,n;
cin>>t;
while(t--)
{
    cin>>n;
    int a[n];
    int rep=-1;
    map<int,int>m;
    lp(i,n)
    {
        cin>>a[i];
        if (m.find(a[i])==m.end())
        m[a[i]]=1;
        else
            m[a[i]]++;
        if (m[a[i]]>2)
            rep=a[i];
    }
    cout<<rep<<endl;}
}