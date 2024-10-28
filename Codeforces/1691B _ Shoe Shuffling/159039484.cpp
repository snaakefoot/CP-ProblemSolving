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
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        bool test=0;
        vector <int> v1,rep;
        int s=0,nb=0,init=0,x;
        lp(i,n)
        cin>>a[i];
        int k=1;
        while(k<n)
        {
 
        if (a[k]==a[k-1])
            s++;
 
        else
            if (s!=0 )
            {v1.push_back(s+1);
            s=0;
            nb++;}
            else
                test=1;
        k++;
 
        }
        if (s!=0)
        v1.push_back(s+1);
        else
            test=1;
        if (test || n==1)
            cout<<-1<<endl;
        else
        {lp(i,nb+1)
        {
            lp(j,v1[i])
            {
                x=(j+1)%(v1[i]);
                rep.push_back(1+init+x);
            }
            init+=v1[i];
        }
        lp(i,n)
        cout<<rep[i]<<' ';
        cout<<endl;}
 
    }
 
}