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
      if ((n==1 &&m>2)|| (m==1&& n>2))
        cout<<-1<<endl;
      else
      {
          if (n==m && n==1)
            cout<<0<<endl;
          else
         {
             ll a=min(n,m),b=max(n,m);
        if (b-a<2)
            cout<<2*(a-1)+b-a<<endl;
        else
          cout<<2*(a-1)+1+4*((b-a-1)/2)+3*((b-a-1)%2)<<endl;}
      }
  }
}