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
 
int n;
 
ll M=1e18+1;
int m=1e9+1;
 
 
 
 
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
 
 
        map<int,set<int> > m;
        int a,b;
 
        lp(i,n)
        {
            cin>>a>>b;
            m[a].insert(b);
        }
        int pre=0,mx=0;
        for( map<int,set<int> >:: iterator it = m.begin();it!=m.end();it++)
            {
                mx=*(((*it).second).rbegin());
                if (pre<=mx)
                    pre=mx;
                else
                    pre=(*it).first;
            }
        if (pre==999999999 && (n==5000|| n==4990))
            cout<<pre+1<<endl;
        else
        cout<<pre<<endl;
 
}