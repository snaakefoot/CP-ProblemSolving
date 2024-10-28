#include<bits/stdc++.h>
 
using namespace std;
 
int main ()
{
int u,n,p,on,mp;
long long int s;
cin>>u;
while(u--)
{
    cin>>n;
    int t[n+1];
    s=0;
    on=0;
    mp=0;
    cin>>t[0];
    for(int i=1;i<n-1;i++)
        {cin>>t[i];
         s+=(t[i]+1)/2;
        if (t[i]==1 )
            on++;
        else
            {if (t[i]%2==1)
            mp++;
           }
        }
    cin>>t[n-1];
    if (on==n-2 ||(n==3 && mp==1))
        cout<<-1<<endl;
    else
        cout<<s<<endl;
 
 
 
}
}