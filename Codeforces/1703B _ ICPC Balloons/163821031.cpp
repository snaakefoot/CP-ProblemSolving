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
        int n,s=0;
        char c;
        cin>>n;
        bool done[26]={0};
        lp(i,n)
        {
            cin>>c;
            if (!done[c-'A'])
            {
                s+=2;
                done[c-'A']=1;
            }
            else
                s++;
        }
        cout<<s<<endl;
    }
 
}