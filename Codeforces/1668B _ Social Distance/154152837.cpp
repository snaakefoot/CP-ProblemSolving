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
  int t,n,m;
  cin>>t;
  while(t--)
  {
      cin>>n>>m;
      int a[n];
      lp(i,n)
      cin>>a[i];
      sort(a,a+n,greater <int>());
      ll s=a[0]*2+1;
      lpi(i,1,n)
      {
          s+=1+a[i];
      }
      s-=a[n-1];
      if (s<=m)
        cout<<"YES"<<endl;
      else
        cout<<"NO"<<endl;
 
 
  }
}