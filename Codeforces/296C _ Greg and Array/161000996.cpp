#include <bits/stdc++.h>
using namespace std;
#define all(v)   ((v).begin()), ((v).end())
#define sz(v)   ((int)((v).size()))
#define clr(v, d)  memset(v, d, sizeof(v))
#define rep(i, v)  for(int i=0;i<sz(v);++i)
#define lp(i, n)  for(ll i=0;i<(ll)(n);++i)
#define lpi(i, j, n) for(int i=(j);i<(int)(n);++i)
#define lpd(i, j, n) for(int i=(j);i>=(int)(n);--i)
typedef long long ll;
int m=1e9;
 
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
 
 
        ll n,m,k,x,y,l,r,d;
 
        cin>>n>>m>>k;
        ll a[n];
        for(ll i=0;i<n;i++)
            cin>>a[i];
        ll add_pre[n]={0};
        ll op [m][3];
        ll nb_op[m];
        ll opp_pre[m]={0};
        ll add[n];
        for (ll i=0;i<m;i++)
        {
            cin>>l>>r>>d;
            op[i][0]=l;
            op[i][1]=r;
            op[i][2]=d;
 
        }
 
        for (ll i=0;i<k;i++)
        {
            cin>>x>>y;
            opp_pre[y-1]++;
            if (x>1)
                opp_pre[x-2]--;
 
        }
        ll s=0;
        for (ll i=m-1;i>=0;i--)
        {
            s+=opp_pre[i];
            nb_op[i]=s;
        }
        for (ll i=0;i<m;i++)
        {
 
            add_pre[op[i][1]-1]+=op[i][2]*nb_op[i];
            if (op[i][0]>1)
                add_pre[op[i][0]-2]-=op[i][2]*nb_op[i];
 
        }
        s=0;
        for (ll i=n-1;i>=0;i--)
        {
 
            s+=add_pre[i];
            add[i]=s;
        }
        for (ll i=0;i<n;i++)
 
 
            cout<<add[i]+a[i]<<' ';
 
 
 
 
 
 
 
 
}
 