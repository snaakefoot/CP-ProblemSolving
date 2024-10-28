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
        char a[6];
        int s1=0,s2=0;
        lp(i,6)
        cin>>a[i];
        lp(i,3)
        s1+=a[i];
        lpi(i,3,6)
        s2+=a[i];
        if (s1==s2)
            cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
          }
 
 
 
}
 