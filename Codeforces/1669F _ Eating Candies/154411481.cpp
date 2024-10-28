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
 
int t,n;
cin>>t;
while(t--)
{
    cin>>n;
    ll a[n];
 
    lp(i,n)
    {
        cin>>a[i];
 
    }
 
    ll s1=a[0],s2=a[n-1],i=0,j=n-1,mx=0;
    while (i<j)
    {
        if (s1==s2)
        {mx=max(i+n+1-j,mx);
        i++;
            s1+=a[i];}
        if(s1<=s2)
        while(s1<s2 && i<j)
        {
            i++;
            s1+=a[i];
        }
        else
        while(s2<s1&& i<j)
        {
            j--;
            s2+=a[j];
        }
    }
    cout<<mx<<endl;
 
 
}
}