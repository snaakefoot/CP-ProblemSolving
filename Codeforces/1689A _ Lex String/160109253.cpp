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
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
 
    int t ; cin>>t;
    while(t--)
    {
        int n,m,k;
        cin>>n>>m>>k;
        char a[n];
        char b[m];
        char c[m+n];
        lp(i,n)
        cin>>a[i];
        lp(i,m)
        cin>>b[i];
        sort(a,a+n);
        sort(b,b+m);
        int nba=0,nbb=0,i=0,j=0;
        while(i<n || j<m)
        {
 
            if (i>=n || j>=m)
                break;
            else
            if (a[i]<b[j] && nba<k && i<n)
            {c[i+j]=a[i];
 
            nba++;
 
            nbb=0;
            i++;}
            else
                if (b[j]<a[i] && nbb<k && j<m)
            {c[i+j]=b[j];
 
            nbb++;
            nba=0;
            j++;}
            else
                if (a[i]<b[j] && nba>=k && j<m)
            {c[i+j]=b[j];
            nbb++;
 
            nba=0;
            j++;}
            else
            if (b[j]<a[i] && nbb>=k && i<n )
            {c[i+j]=a[i];
            nba++;
 
            nbb=0;
            i++;
            }
 
 
        }
        lp(p,i+j)
        cout<<c[p];
        cout<<endl;
 
 
 
 
        }
 
 
 
 
 
 
    }
 
 
 