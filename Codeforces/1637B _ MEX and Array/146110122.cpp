#include<bits/stdc++.h>
 
using namespace std;
 
int main ()
{
int u,n,s,p;
cin>>u;
while(u--)
{
    cin>>n;
    int t[n];
    int z=0;
    s=0;
    for(int i=0;i<n;i++)
        {cin>>t[i];
        if (t[i]==0)
            z++;
        }
    for (int i=0;i<n;i++)
    {
        p=z;
    for(int j=n-1;j>=i;j--)
    {
        s+=j-i+p+1;
        if (t[j]==0)
            p--;
    }
    if (t[i]==0)
        z--;
    }
    cout<<s<<endl;
}
 
}