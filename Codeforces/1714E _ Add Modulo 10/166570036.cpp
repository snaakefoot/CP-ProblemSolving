#include <bits/stdc++.h>
 
using namespace std;
#define all(v)   ((v).begin()), ((v).end())
#define sz(v)   ((int)((v).size()))
#define clr(v, d)  memset(v, d, sizeof(v))
#define rep(i, v)  for(int i=0;i<sz(v);++i)
#define lp(i, n)  for(int i=0;i<(int)(n);++i)
#define lpi(i, j, n) for(int i=(j);i<(int)(n);++i)
#define lpd(i, j, n) for(int i=(j);i>=(int)(n);--i)
#define FAST ios::sync_with_stdio(0), cin.tie(0),cout.tie(0)
#define pb push_back
#define mp make_pair
 
#define endl '\n'
typedef long long ll;
bool cmp(const pair<int,int> &a,
              const pair<int,int> &b)
{
    if (a.first!=b.first)
        return a.first<b.first;
    else
    return (a.second < b.second);
}
 
 
int main()
{
    FAST;
    int u;cin>>u;
 
    while(u--)
    {
        int n,nb0=0,old;cin>>n;
        int a[n];
        set<int> s;
        lp(i,n)
        {
            cin>>a[i];
            if (a[i]%10==5)
            {a[i]+=5;
            nb0++;}
            else
            if (a[i]%10==0)
            nb0++;
            else
            if (a[i]%10==1 || a[i]%10==3 || a[i]%10==7 || a[i]%10==9)
                a[i]+=a[i]%10;
 
                if (a[i]%10==6)
                    a[i]+=6;
                else
                    if (a[i]%10==4)
                    a[i]+=18;
                else
                    if (a[i]%10==8)
                    a[i]+=14;
 
            s.insert(a[i]);
        }
        int p=s.size();
        if(nb0!=0 && p!=1)
            cout<<"NO"<<endl;
 
        else
        {
            set<int> ::iterator it=s.begin();
            p--;
            while(p>0)
            {
                old=*(it);
                it++;
                if ((*(it)-old)%20!=0)
                    break;
                p--;
            }
            if (p==0)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }
 
    }
}