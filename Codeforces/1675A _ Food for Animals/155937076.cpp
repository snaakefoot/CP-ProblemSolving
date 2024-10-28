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
const int m=1e7;
 
int main()
 
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c,x,y;
        cin>>a>>b>>c>>x>>y;
        int a1=a-x,a2=b-y;
        if (a1>=0 && a2>=0)
            cout<<"YES"<<endl;
        else
            if (a1+c>=0 && a2+c>=0 && a2+a1+c>=0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
 
 
}
 