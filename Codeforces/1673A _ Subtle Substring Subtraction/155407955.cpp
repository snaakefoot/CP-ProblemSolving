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
int t;
cin>>t;
while(t--)
{
    string ch;
    cin>>ch;
    int n= ch.length();
    ll s=0;
    lp(i,n)
        s+=(ch[i]-'a')+1;
    if (n%2!=0)
    {
        s-=2*min(ch[0]-'a'+1,ch[n-1]-'a'+1);
    }
    if (s>=0)
        cout<<"Alice "<<s<<endl;
    else
        cout<<"Bob "<<-s<<endl;
}
 
 
}