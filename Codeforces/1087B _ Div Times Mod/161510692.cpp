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
int mm=1e9;
 
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
 
 
           int n , k;
    long long m=99999999999 ;
    cin >> n >> k ;
 
  for (int i= 1 ; i<k;i++)
  {
   long long l=(long long)(n/i )*k+ i;
  if( l<m && n%i==0)
  m=(l);}
 
 
cout<<m;
 
 
 
 
 
 
 
}
 