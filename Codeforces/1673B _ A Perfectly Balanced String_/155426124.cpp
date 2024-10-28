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
    set<char> s;
    cin>>ch;
    int n=ch.length(),n1=1;
    string ch1=string(1,ch[0]);
    s.insert(ch[0]);
    lpi(i,1,n)
            if (s.find(ch[i])==s.end())
            {
                n1++;
                ch1+=ch[i];
                s.insert(ch[i]);
            }
    string f=ch1;
    lp(i,(n/n1)-1)
        f+=ch1;
    f+=ch1.substr(0,n%n1);
 
    if (f==ch)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}
 
 
}