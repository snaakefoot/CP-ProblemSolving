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
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,t;
    cin>>t;
    while(t--)
    {
        int n;
        string ch;
        cin>>n;
        cin>>ch;
        if (n==2)
            cout<<2<<endl;
        else
        {
            int j=(n/2),s=0,es=0,i=1;
            if (n%2==1)
            {
                s=1;
 
                es=1;
 
            }
 
            while( ch[j-i]==ch[j])
                {
                i++;
                s+=2;}
            cout<<s<<endl;
        }
    }
}