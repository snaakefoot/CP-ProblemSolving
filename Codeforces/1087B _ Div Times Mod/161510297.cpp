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
 
 
       int n,k;
       cin>>n>>k;
       int i=1;
       while(i<n )
       {
           if (n%i==0 && n/i<k)
                break;
            else
                i++;
       }
       cout<<k*i+(n/i);
 
 
}
 